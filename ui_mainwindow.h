/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 30. Sep 13:25:12 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTXTtoXPC;
    QAction *actionXPCtoTXT;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *leftEditor;
    QTextEdit *rightEditor;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonLeftARv1;
    QRadioButton *radioButtonLeftARv3;
    QRadioButton *radioButtonLeftRAW;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonRightARv1;
    QRadioButton *radioButtonRightARv3;
    QRadioButton *radioButtonRightRAW;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonFormat1;
    QRadioButton *radioButtonFormat2;
    QRadioButton *radioButtonFormat3;
    QMenuBar *menuBar;
    QMenu *menuXPC;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(485, 349);
        actionTXTtoXPC = new QAction(MainWindow);
        actionTXTtoXPC->setObjectName(QString::fromUtf8("actionTXTtoXPC"));
        actionXPCtoTXT = new QAction(MainWindow);
        actionXPCtoTXT->setObjectName(QString::fromUtf8("actionXPCtoTXT"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftEditor = new QTextEdit(centralWidget);
        leftEditor->setObjectName(QString::fromUtf8("leftEditor"));

        horizontalLayout_2->addWidget(leftEditor);

        rightEditor = new QTextEdit(centralWidget);
        rightEditor->setObjectName(QString::fromUtf8("rightEditor"));

        horizontalLayout_2->addWidget(rightEditor);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonLeftARv1 = new QRadioButton(groupBox);
        radioButtonLeftARv1->setObjectName(QString::fromUtf8("radioButtonLeftARv1"));

        verticalLayout_2->addWidget(radioButtonLeftARv1);

        radioButtonLeftARv3 = new QRadioButton(groupBox);
        radioButtonLeftARv3->setObjectName(QString::fromUtf8("radioButtonLeftARv3"));

        verticalLayout_2->addWidget(radioButtonLeftARv3);

        radioButtonLeftRAW = new QRadioButton(groupBox);
        radioButtonLeftRAW->setObjectName(QString::fromUtf8("radioButtonLeftRAW"));
        radioButtonLeftRAW->setChecked(true);

        verticalLayout_2->addWidget(radioButtonLeftRAW);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_4);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonRightARv1 = new QRadioButton(groupBox_2);
        radioButtonRightARv1->setObjectName(QString::fromUtf8("radioButtonRightARv1"));

        verticalLayout->addWidget(radioButtonRightARv1);

        radioButtonRightARv3 = new QRadioButton(groupBox_2);
        radioButtonRightARv3->setObjectName(QString::fromUtf8("radioButtonRightARv3"));
        radioButtonRightARv3->setChecked(true);

        verticalLayout->addWidget(radioButtonRightARv3);

        radioButtonRightRAW = new QRadioButton(groupBox_2);
        radioButtonRightRAW->setObjectName(QString::fromUtf8("radioButtonRightRAW"));

        verticalLayout->addWidget(radioButtonRightRAW);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButtonFormat1 = new QRadioButton(groupBox_3);
        radioButtonFormat1->setObjectName(QString::fromUtf8("radioButtonFormat1"));

        verticalLayout_3->addWidget(radioButtonFormat1);

        radioButtonFormat2 = new QRadioButton(groupBox_3);
        radioButtonFormat2->setObjectName(QString::fromUtf8("radioButtonFormat2"));
        radioButtonFormat2->setChecked(true);

        verticalLayout_3->addWidget(radioButtonFormat2);

        radioButtonFormat3 = new QRadioButton(groupBox_3);
        radioButtonFormat3->setObjectName(QString::fromUtf8("radioButtonFormat3"));

        verticalLayout_3->addWidget(radioButtonFormat3);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 485, 20));
        menuXPC = new QMenu(menuBar);
        menuXPC->setObjectName(QString::fromUtf8("menuXPC"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuXPC->menuAction());
        menuBar->addAction(menu->menuAction());
        menuXPC->addAction(actionTXTtoXPC);
        menuXPC->addAction(actionXPCtoTXT);
        menu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionTXTtoXPC->setText(QApplication::translate("MainWindow", "TXT to XPC", 0, QApplication::UnicodeUTF8));
        actionXPCtoTXT->setText(QApplication::translate("MainWindow", "XPC to TXT", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "From", 0, QApplication::UnicodeUTF8));
        radioButtonLeftARv1->setText(QApplication::translate("MainWindow", "AR v1/2", 0, QApplication::UnicodeUTF8));
        radioButtonLeftARv3->setText(QApplication::translate("MainWindow", "AR v3/4", 0, QApplication::UnicodeUTF8));
        radioButtonLeftRAW->setText(QApplication::translate("MainWindow", "RAW", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Proceed", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "<->", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "To", 0, QApplication::UnicodeUTF8));
        radioButtonRightARv1->setText(QApplication::translate("MainWindow", "AR v1/2", 0, QApplication::UnicodeUTF8));
        radioButtonRightARv3->setText(QApplication::translate("MainWindow", "AR v3/4", 0, QApplication::UnicodeUTF8));
        radioButtonRightRAW->setText(QApplication::translate("MainWindow", "RAW", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Output Format", 0, QApplication::UnicodeUTF8));
        radioButtonFormat1->setText(QApplication::translate("MainWindow", "XXXXXXXXYYYYYYYY", 0, QApplication::UnicodeUTF8));
        radioButtonFormat2->setText(QApplication::translate("MainWindow", "XXXXXXXX YYYYYYYY", 0, QApplication::UnicodeUTF8));
        radioButtonFormat3->setText(QApplication::translate("MainWindow", "2 Lines", 0, QApplication::UnicodeUTF8));
        menuXPC->setTitle(QApplication::translate("MainWindow", "XPC", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
