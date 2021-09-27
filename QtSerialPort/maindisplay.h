#ifndef MAINDISPLAY_H
#define MAINDISPLAY_H

#include <QMainWindow>

#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <QTimer>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>



namespace Ui {
class MainDisplay;
}

class MainDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainDisplay(QWidget *parent = 0);
    ~MainDisplay();



private slots:
    void on_timer_timeout();

    void slot_RecvPortData();

    void on_btnScan_clicked();

    void on_btnOpen_clicked();

    void on_btnClose_clicked();


    void on_btnSend_clicked();

    void on_btnClearRev_clicked();

    void on_btnClearSend_clicked();

private:
    Ui::MainDisplay *ui;


private:
    QSerialPort serialPort;
    QDateTime   curdatetime;
    QTimer      timer;
    void SerialPortInit();
    void String_To_Hex(QString *str, QByteArray *sendBytes);


};

#endif // MAINDISPLAY_H
