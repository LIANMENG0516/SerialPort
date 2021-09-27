#include "maindisplay.h"
#include "ui_maindisplay.h"

MainDisplay::MainDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainDisplay)
{
    ui->setupUi(this);

    setWindowTitle("LMENG");
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

    SerialPortInit();

    connect(&serialPort, SIGNAL(readyRead()), this, SLOT(slot_RecvPortData()));
    connect(&timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));

    ui->btnOpen->setEnabled(1);
    ui->btnClose->setEnabled(0);
    ui->btnSend->setEnabled(0);

}

MainDisplay::~MainDisplay()
{
    delete ui;
}

void MainDisplay::slot_RecvPortData()
{
    QByteArray revBytes;

    revBytes = serialPort.readAll();

    if(ui->chkBoxRevDisplayTime->isChecked())
    {
        curdatetime = QDateTime::currentDateTime();
        ui->textEditRev->append(curdatetime.toString("[yyyy-MM-dd hh:mm:ss:zzz]收<-"));
    }

    if(ui->radioBtnRevHex->isChecked())
    {
        for(qint8 i=0; i<revBytes.length(); i++)
        {
            QString str = QString("%1 ").arg(revBytes.at(i)&0xFF, 2, 16, QLatin1Char('0'));

            ui->textEditRev->insertPlainText(str);
        }
    }
    else
    {
        QString str = QString(revBytes);
        ui->textEditRev->insertPlainText(str);
    }
}

void MainDisplay::on_timer_timeout()
{
    if(!ui->chkBoxRepeatSend->isChecked())
    {
        timer.stop();

    }

    on_btnSend_clicked();
}

void MainDisplay::SerialPortInit()
{
    QString str = "COM";
    QStringList comList;
    for(int i=1; i<21; i++)
    {
        comList.append(str + QString::number(i, 10));
    }
    ui->boxPortNum->addItems(comList);

    QStringList rateList = {"4800", "9600", "115200", "128000", "230400", "256000", "460800", "500000", "512000"};
    ui->boxBaundRate->addItems(rateList);
    ui->boxBaundRate->setCurrentText("115200");

    QStringList dataBitList = {"6", "7", "8"};
    ui->boxDataBits->addItems(dataBitList);
    ui->boxDataBits->setCurrentText("8");

    QStringList stopBitList = {"1 bit", "1.5 bit", "2 bit"};
    ui->boxStopBits->addItems(stopBitList);
    ui->boxStopBits->setCurrentText("1 bit");

    QStringList partityList = {"None", "Odd", "Even"};
    ui->boxPartity->addItems(partityList);
    ui->boxPartity->setCurrentText("None");

    QStringList flowCtrlList = {"None", "Software", "Hardware"};
    ui->boxFlowCtrl->addItems(flowCtrlList);
    ui->boxFlowCtrl->setCurrentText("None");
}



void MainDisplay::on_btnScan_clicked()
{
    ui->boxPortNum->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->boxPortNum->addItem(info.portName());
        serialPort.setPort(info);
        serialPort.close();
    }
}

void MainDisplay::on_btnOpen_clicked()
{
    //打开串口
    if(!serialPort.open(QIODevice::ReadWrite))
    {
        qDebug("串口打开失败!");
        QMessageBox::warning(this, "警告", "串口打开失败", QMessageBox::Ok, QMessageBox::NoButton);
    }
    else
    {
        //设置串口号
        serialPort.setPortName(ui->boxPortNum->currentText());

        //设置波特率
        serialPort.setBaudRate(ui->boxBaundRate->currentText().toLong());

        //设置数据位
        if(ui->boxDataBits->currentText() == "6 bit")
        {
            serialPort.setDataBits(QSerialPort::Data6);
        }
        else if(ui->boxDataBits->currentText() == "7 bit")
        {
            serialPort.setDataBits(QSerialPort::Data7);
        }
        else if(ui->boxDataBits->currentText() == "8 bit")
        {
            serialPort.setDataBits(QSerialPort::Data8);
        }
        else
        {
            serialPort.setDataBits(QSerialPort::UnknownDataBits);
        }

        //设置停止位
        if(ui->boxStopBits->currentText() == "1 bit")
        {
            serialPort.setStopBits(QSerialPort::OneStop);
        }
        else if(ui->boxStopBits->currentText() == "1.5 bit")
        {
            serialPort.setStopBits(QSerialPort::OneAndHalfStop);
        }
        else if(ui->boxStopBits->currentText() == "2 bit")
        {
            serialPort.setStopBits(QSerialPort::TwoStop);
        }
        else
        {
            serialPort.setStopBits(QSerialPort::UnknownStopBits);
        }

        //设置校验位
        if(ui->boxPartity->currentText() == "None")
        {
            serialPort.setParity(QSerialPort::NoParity);
        }
        else if(ui->boxPartity->currentText() == "Odd")
        {
            serialPort.setParity(QSerialPort::OddParity);
        }
        else
        {
            serialPort.setParity(QSerialPort::EvenParity);
        }

        //设置流控
        if(ui->boxFlowCtrl->currentText()=="None")
        {
            serialPort.setFlowControl(QSerialPort::NoFlowControl);
        }
        else if(ui->boxFlowCtrl->currentText() == "Software")
        {
            serialPort.setFlowControl(QSerialPort::SoftwareControl);
        }
        else
        {
            serialPort.setFlowControl(QSerialPort::HardwareControl);
        }

        ui->boxPortNum->setEnabled(0);
        ui->boxBaundRate->setEnabled(0);
        ui->boxBaundRate->setEnabled(0);
        ui->boxDataBits->setEnabled(0);
        ui->boxStopBits->setEnabled(0);
        ui->boxPartity->setEnabled(0);
        ui->boxFlowCtrl->setEnabled(0);
        ui->btnOpen->setEnabled(0);
        ui->btnClose->setEnabled(1);
        ui->btnSend->setEnabled(1);
    }
}

void MainDisplay::on_btnClose_clicked()
{
    serialPort.close();

    ui->boxPortNum->setEnabled(1);
    ui->boxBaundRate->setEnabled(1);
    ui->boxBaundRate->setEnabled(1);
    ui->boxDataBits->setEnabled(1);
    ui->boxStopBits->setEnabled(1);
    ui->boxPartity->setEnabled(1);
    ui->boxFlowCtrl->setEnabled(1);
    ui->btnOpen->setEnabled(1);
    ui->btnClose->setEnabled(0);
    ui->btnSend->setEnabled(0);
}

void MainDisplay::on_btnSend_clicked()
{
    QByteArray sendBytes;

    QString str;

    str = ui->textEditSend->toPlainText();

    if(ui->radioBtnSendHex->isChecked())
    {
        str = str.remove(' ');

        if(str.length() % 2)
        {
            QMessageBox::warning(this, "警告", "非法数据,请检查!", QMessageBox::Ok, QMessageBox::NoButton);
            return;
        }
        else
        {            
            String_To_Hex(&str, &sendBytes);

            if(ui->chkBoxRevDisplayTime->isChecked())
            {
                curdatetime = QDateTime::currentDateTime();
                ui->textEditRev->append(curdatetime.toString("[yyyy-MM-dd hh:mm:ss:zzz]发->"));

                for(qint8 i=0; i<sendBytes.length(); i++)
                {
                    QString str = QString("%1 ").arg(sendBytes.at(i)&0xFF, 2, 16, QLatin1Char('0'));

                    ui->textEditRev->insertPlainText(str);
                }
            }
        }
    }
    else
    {
        if(ui->chkBoxRevDisplayTime->isChecked())
        {
            curdatetime = QDateTime::currentDateTime();
            ui->textEditRev->append(curdatetime.toString("[yyyy-MM-dd hh:mm:ss:zzz]发->"));

            ui->textEditRev->insertPlainText(str);
        }

        if(ui->chkBoxNewLine->isChecked())
        {
            str.append("\r\n");
        }

        sendBytes = str.toLatin1();
    }

    if(ui->chkBoxRepeatSend->isChecked())
    {
        timer.setInterval(ui->spinBoxRepatSendTime->value());
        timer.start();
    }

    serialPort.write(sendBytes);
}


void MainDisplay::String_To_Hex(QString *str, QByteArray *sendBytes)
{
    for(qint8 i=0; i<str->length(); i=i+2)
    {
        bool ok;
        qint8 hexdata;
        QString hex_h = str->at(i);
        QString hex_l = str->at(i+1);
        hexdata = (hex_h.toInt(&ok, 16) << 4) + hex_l.toInt(&ok, 16);
        sendBytes->append(hexdata);
    }

    sendBytes->resize(str->length() / 2);
}

void MainDisplay::on_btnClearRev_clicked()
{
    ui->textEditRev->clear();
}

void MainDisplay::on_btnClearSend_clicked()
{
    ui->textEditSend->clear();
}
