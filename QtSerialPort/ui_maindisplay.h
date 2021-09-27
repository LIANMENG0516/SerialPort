/********************************************************************************
** Form generated from reading UI file 'maindisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDISPLAY_H
#define UI_MAINDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDisplay
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_15;
    QVBoxLayout *verticalLayout;
    QComboBox *boxPortNum;
    QComboBox *boxBaundRate;
    QComboBox *boxDataBits;
    QComboBox *boxStopBits;
    QComboBox *boxPartity;
    QComboBox *boxFlowCtrl;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnClose;
    QPushButton *btnScan;
    QGroupBox *groupBox_3;
    QRadioButton *radioBtnRevHex;
    QRadioButton *radioBtnRevAscii;
    QCheckBox *chkBoxRevDisplayTime;
    QGroupBox *groupBox_4;
    QRadioButton *radioBtnSendHex;
    QRadioButton *radioBtnSendAscii;
    QCheckBox *chkBoxRepeatSend;
    QCheckBox *chkBoxNewLine;
    QSpinBox *spinBoxRepatSendTime;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditRev;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QTextEdit *textEditSend;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_4;
    QPushButton *btnSend;
    QPushButton *btnClearRev;
    QPushButton *btnClearSend;

    void setupUi(QMainWindow *MainDisplay)
    {
        if (MainDisplay->objectName().isEmpty())
            MainDisplay->setObjectName(QStringLiteral("MainDisplay"));
        MainDisplay->resize(1170, 756);
        MainDisplay->setMinimumSize(QSize(1170, 756));
        MainDisplay->setMaximumSize(QSize(1170, 756));
        centralWidget = new QWidget(MainDisplay);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1161, 751));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(horizontalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        verticalLayout_2->addWidget(label_15);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        boxPortNum = new QComboBox(groupBox_2);
        boxPortNum->setObjectName(QStringLiteral("boxPortNum"));
        boxPortNum->setEnabled(true);
        boxPortNum->setFont(font1);

        verticalLayout->addWidget(boxPortNum);

        boxBaundRate = new QComboBox(groupBox_2);
        boxBaundRate->setObjectName(QStringLiteral("boxBaundRate"));
        boxBaundRate->setFont(font1);

        verticalLayout->addWidget(boxBaundRate);

        boxDataBits = new QComboBox(groupBox_2);
        boxDataBits->setObjectName(QStringLiteral("boxDataBits"));
        boxDataBits->setFont(font1);

        verticalLayout->addWidget(boxDataBits);

        boxStopBits = new QComboBox(groupBox_2);
        boxStopBits->setObjectName(QStringLiteral("boxStopBits"));
        boxStopBits->setFont(font1);

        verticalLayout->addWidget(boxStopBits);

        boxPartity = new QComboBox(groupBox_2);
        boxPartity->setObjectName(QStringLiteral("boxPartity"));
        boxPartity->setFont(font1);

        verticalLayout->addWidget(boxPartity);

        boxFlowCtrl = new QComboBox(groupBox_2);
        boxFlowCtrl->setObjectName(QStringLiteral("boxFlowCtrl"));
        boxFlowCtrl->setFont(font1);

        verticalLayout->addWidget(boxFlowCtrl);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOpen = new QPushButton(groupBox_2);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setFont(font1);

        horizontalLayout->addWidget(btnOpen);

        btnClose = new QPushButton(groupBox_2);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setFont(font1);

        horizontalLayout->addWidget(btnClose);


        verticalLayout_3->addLayout(horizontalLayout);

        btnScan = new QPushButton(groupBox_2);
        btnScan->setObjectName(QStringLiteral("btnScan"));
        btnScan->setFont(font1);

        verticalLayout_3->addWidget(btnScan);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(horizontalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        radioBtnRevHex = new QRadioButton(groupBox_3);
        radioBtnRevHex->setObjectName(QStringLiteral("radioBtnRevHex"));
        radioBtnRevHex->setGeometry(QRect(10, 20, 61, 19));
        radioBtnRevHex->setFont(font1);
        radioBtnRevAscii = new QRadioButton(groupBox_3);
        radioBtnRevAscii->setObjectName(QStringLiteral("radioBtnRevAscii"));
        radioBtnRevAscii->setGeometry(QRect(110, 20, 51, 19));
        radioBtnRevAscii->setFont(font1);
        radioBtnRevAscii->setChecked(true);
        chkBoxRevDisplayTime = new QCheckBox(groupBox_3);
        chkBoxRevDisplayTime->setObjectName(QStringLiteral("chkBoxRevDisplayTime"));
        chkBoxRevDisplayTime->setGeometry(QRect(10, 50, 151, 19));
        chkBoxRevDisplayTime->setFont(font1);

        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(horizontalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font);
        radioBtnSendHex = new QRadioButton(groupBox_4);
        radioBtnSendHex->setObjectName(QStringLiteral("radioBtnSendHex"));
        radioBtnSendHex->setGeometry(QRect(10, 20, 61, 19));
        radioBtnSendHex->setFont(font1);
        radioBtnSendAscii = new QRadioButton(groupBox_4);
        radioBtnSendAscii->setObjectName(QStringLiteral("radioBtnSendAscii"));
        radioBtnSendAscii->setGeometry(QRect(110, 20, 51, 19));
        radioBtnSendAscii->setFont(font1);
        radioBtnSendAscii->setChecked(true);
        chkBoxRepeatSend = new QCheckBox(groupBox_4);
        chkBoxRepeatSend->setObjectName(QStringLiteral("chkBoxRepeatSend"));
        chkBoxRepeatSend->setGeometry(QRect(10, 50, 121, 19));
        chkBoxRepeatSend->setFont(font1);
        chkBoxNewLine = new QCheckBox(groupBox_4);
        chkBoxNewLine->setObjectName(QStringLiteral("chkBoxNewLine"));
        chkBoxNewLine->setGeometry(QRect(10, 80, 101, 19));
        chkBoxNewLine->setFont(font1);
        spinBoxRepatSendTime = new QSpinBox(groupBox_4);
        spinBoxRepatSendTime->setObjectName(QStringLiteral("spinBoxRepatSendTime"));
        spinBoxRepatSendTime->setGeometry(QRect(110, 50, 71, 22));
        spinBoxRepatSendTime->setFont(font1);
        spinBoxRepatSendTime->setMinimum(1);
        spinBoxRepatSendTime->setMaximum(9999);

        verticalLayout_4->addWidget(groupBox_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_5 = new QGroupBox(horizontalLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEditRev = new QTextEdit(groupBox_5);
        textEditRev->setObjectName(QStringLiteral("textEditRev"));
        textEditRev->setFont(font1);

        gridLayout_2->addWidget(textEditRev, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(horizontalLayoutWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEditSend = new QTextEdit(groupBox_6);
        textEditSend->setObjectName(QStringLiteral("textEditSend"));
        textEditSend->setFont(font1);

        gridLayout_3->addWidget(textEditSend, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_6);


        verticalLayout_6->addLayout(verticalLayout_5);

        groupBox_7 = new QGroupBox(horizontalLayoutWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_4 = new QGridLayout(groupBox_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        btnSend = new QPushButton(groupBox_7);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        gridLayout_4->addWidget(btnSend, 0, 0, 1, 1);

        btnClearRev = new QPushButton(groupBox_7);
        btnClearRev->setObjectName(QStringLiteral("btnClearRev"));

        gridLayout_4->addWidget(btnClearRev, 0, 1, 1, 1);

        btnClearSend = new QPushButton(groupBox_7);
        btnClearSend->setObjectName(QStringLiteral("btnClearSend"));

        gridLayout_4->addWidget(btnClearSend, 0, 2, 1, 1);


        verticalLayout_6->addWidget(groupBox_7);


        horizontalLayout_2->addLayout(verticalLayout_6);

        MainDisplay->setCentralWidget(centralWidget);

        retranslateUi(MainDisplay);

        QMetaObject::connectSlotsByName(MainDisplay);
    } // setupUi

    void retranslateUi(QMainWindow *MainDisplay)
    {
        MainDisplay->setWindowTitle(QApplication::translate("MainDisplay", "MainDisplay", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainDisplay", "Serial Port Configation", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainDisplay", "Serial Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainDisplay", "Baund Rate", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainDisplay", "Data Bits", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainDisplay", "Stop Bits", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainDisplay", "Partity", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainDisplay", "Flow Ctrl", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("MainDisplay", "Open", Q_NULLPTR));
        btnClose->setText(QApplication::translate("MainDisplay", "Close", Q_NULLPTR));
        btnScan->setText(QApplication::translate("MainDisplay", "Scan", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainDisplay", "Receive Configation", Q_NULLPTR));
        radioBtnRevHex->setText(QApplication::translate("MainDisplay", "HEX", Q_NULLPTR));
        radioBtnRevAscii->setText(QApplication::translate("MainDisplay", "ASCII", Q_NULLPTR));
        chkBoxRevDisplayTime->setText(QApplication::translate("MainDisplay", "Display Time", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainDisplay", "Send Configation", Q_NULLPTR));
        radioBtnSendHex->setText(QApplication::translate("MainDisplay", "HEX", Q_NULLPTR));
        radioBtnSendAscii->setText(QApplication::translate("MainDisplay", "ASCII", Q_NULLPTR));
        chkBoxRepeatSend->setText(QApplication::translate("MainDisplay", "Repeat Send", Q_NULLPTR));
        chkBoxNewLine->setText(QApplication::translate("MainDisplay", "New Line", Q_NULLPTR));
        spinBoxRepatSendTime->setSuffix(QApplication::translate("MainDisplay", "Ms", Q_NULLPTR));
        spinBoxRepatSendTime->setPrefix(QString());
        groupBox_5->setTitle(QApplication::translate("MainDisplay", "Receive", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainDisplay", "Send", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        btnSend->setText(QApplication::translate("MainDisplay", "Send", Q_NULLPTR));
        btnClearRev->setText(QApplication::translate("MainDisplay", "Clear Receive Area", Q_NULLPTR));
        btnClearSend->setText(QApplication::translate("MainDisplay", "Clear Send Area", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainDisplay: public Ui_MainDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDISPLAY_H
