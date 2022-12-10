/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *bnEnum;
    QComboBox *ComboDevices;
    QPushButton *bnOpen;
    QPushButton *bnClose;
    QPushButton *bnStart;
    QPushButton *bnStop;
    QRadioButton *bnContinuesMode;
    QRadioButton *bnTriggerMode;
    QPushButton *bnTriggerExec;
    QCheckBox *cbSoftTrigger;
    QLabel *lExposure;
    QLineEdit *tbExposure;
    QLabel *lGain;
    QLineEdit *tbGain;
    QLabel *lFrameRate;
    QLineEdit *tbFrameRate;
    QPushButton *bnGetParam;
    QPushButton *bnSetParam;
    QWidget *widgetDisplay;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(671, 426);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        bnEnum = new QPushButton(centralWidget);
        bnEnum->setObjectName(QString::fromUtf8("bnEnum"));
        bnEnum->setGeometry(QRect(490, 20, 151, 23));
        ComboDevices = new QComboBox(centralWidget);
        ComboDevices->setObjectName(QString::fromUtf8("ComboDevices"));
        ComboDevices->setGeometry(QRect(10, 20, 451, 22));
        bnOpen = new QPushButton(centralWidget);
        bnOpen->setObjectName(QString::fromUtf8("bnOpen"));
        bnOpen->setGeometry(QRect(490, 70, 72, 23));
        bnClose = new QPushButton(centralWidget);
        bnClose->setObjectName(QString::fromUtf8("bnClose"));
        bnClose->setEnabled(false);
        bnClose->setGeometry(QRect(570, 70, 72, 23));
        bnStart = new QPushButton(centralWidget);
        bnStart->setObjectName(QString::fromUtf8("bnStart"));
        bnStart->setEnabled(false);
        bnStart->setGeometry(QRect(490, 160, 75, 23));
        bnStop = new QPushButton(centralWidget);
        bnStop->setObjectName(QString::fromUtf8("bnStop"));
        bnStop->setEnabled(false);
        bnStop->setGeometry(QRect(570, 160, 75, 23));
        bnContinuesMode = new QRadioButton(centralWidget);
        bnContinuesMode->setObjectName(QString::fromUtf8("bnContinuesMode"));
        bnContinuesMode->setEnabled(false);
        bnContinuesMode->setGeometry(QRect(480, 130, 91, 16));
        bnTriggerMode = new QRadioButton(centralWidget);
        bnTriggerMode->setObjectName(QString::fromUtf8("bnTriggerMode"));
        bnTriggerMode->setEnabled(false);
        bnTriggerMode->setGeometry(QRect(570, 130, 91, 16));
        bnTriggerExec = new QPushButton(centralWidget);
        bnTriggerExec->setObjectName(QString::fromUtf8("bnTriggerExec"));
        bnTriggerExec->setEnabled(false);
        bnTriggerExec->setGeometry(QRect(570, 200, 75, 23));
        cbSoftTrigger = new QCheckBox(centralWidget);
        cbSoftTrigger->setObjectName(QString::fromUtf8("cbSoftTrigger"));
        cbSoftTrigger->setEnabled(false);
        cbSoftTrigger->setGeometry(QRect(490, 200, 71, 16));
        lExposure = new QLabel(centralWidget);
        lExposure->setObjectName(QString::fromUtf8("lExposure"));
        lExposure->setGeometry(QRect(490, 280, 54, 12));
        tbExposure = new QLineEdit(centralWidget);
        tbExposure->setObjectName(QString::fromUtf8("tbExposure"));
        tbExposure->setEnabled(false);
        tbExposure->setGeometry(QRect(550, 280, 91, 20));
        lGain = new QLabel(centralWidget);
        lGain->setObjectName(QString::fromUtf8("lGain"));
        lGain->setGeometry(QRect(490, 310, 54, 12));
        tbGain = new QLineEdit(centralWidget);
        tbGain->setObjectName(QString::fromUtf8("tbGain"));
        tbGain->setEnabled(false);
        tbGain->setGeometry(QRect(550, 310, 91, 20));
        lFrameRate = new QLabel(centralWidget);
        lFrameRate->setObjectName(QString::fromUtf8("lFrameRate"));
        lFrameRate->setGeometry(QRect(490, 350, 54, 12));
        tbFrameRate = new QLineEdit(centralWidget);
        tbFrameRate->setObjectName(QString::fromUtf8("tbFrameRate"));
        tbFrameRate->setEnabled(false);
        tbFrameRate->setGeometry(QRect(550, 340, 91, 20));
        bnGetParam = new QPushButton(centralWidget);
        bnGetParam->setObjectName(QString::fromUtf8("bnGetParam"));
        bnGetParam->setEnabled(false);
        bnGetParam->setGeometry(QRect(490, 380, 75, 23));
        bnSetParam = new QPushButton(centralWidget);
        bnSetParam->setObjectName(QString::fromUtf8("bnSetParam"));
        bnSetParam->setEnabled(false);
        bnSetParam->setGeometry(QRect(570, 380, 75, 23));
        widgetDisplay = new QWidget(centralWidget);
        widgetDisplay->setObjectName(QString::fromUtf8("widgetDisplay"));
        widgetDisplay->setGeometry(QRect(10, 60, 451, 341));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(bnEnum, ComboDevices);
        QWidget::setTabOrder(ComboDevices, bnOpen);
        QWidget::setTabOrder(bnOpen, bnClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BasicDemo", nullptr));
        bnEnum->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\350\256\276\345\244\207", nullptr));
        bnOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\256\276\345\244\207", nullptr));
        bnClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\256\276\345\244\207", nullptr));
        bnStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
        bnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\351\207\207\351\233\206", nullptr));
        bnContinuesMode->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\346\250\241\345\274\217", nullptr));
        bnTriggerMode->setText(QApplication::translate("MainWindow", "\350\247\246\345\217\221\346\250\241\345\274\217", nullptr));
        bnTriggerExec->setText(QApplication::translate("MainWindow", "\350\275\257\350\247\246\345\217\221\344\270\200\346\254\241", nullptr));
        cbSoftTrigger->setText(QApplication::translate("MainWindow", "\350\275\257\350\247\246\345\217\221", nullptr));
        lExposure->setText(QApplication::translate("MainWindow", "\346\233\235\345\205\211", nullptr));
        lGain->setText(QApplication::translate("MainWindow", "\345\242\236\347\233\212", nullptr));
        lFrameRate->setText(QApplication::translate("MainWindow", "\345\270\247\347\216\207", nullptr));
        bnGetParam->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\217\202\346\225\260", nullptr));
        bnSetParam->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
