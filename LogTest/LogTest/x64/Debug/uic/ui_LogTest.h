/********************************************************************************
** Form generated from reading UI file 'LogTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGTEST_H
#define UI_LOGTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogTestClass
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *search;
    QPushButton *clear;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *setting;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *addCritical;
    QPushButton *error;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *warnings;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lableerror;
    QLineEdit *errors;
    QTableWidget *table;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LogTestClass)
    {
        if (LogTestClass->objectName().isEmpty())
            LogTestClass->setObjectName(QString::fromUtf8("LogTestClass"));
        LogTestClass->resize(4095, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogTestClass->sizePolicy().hasHeightForWidth());
        LogTestClass->setSizePolicy(sizePolicy);
        LogTestClass->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        centralWidget = new QWidget(LogTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEdit);

        search = new QPushButton(centralWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(search);


        horizontalLayout->addLayout(horizontalLayout_2);

        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(clear);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        setting = new QPushButton(centralWidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
""));

        horizontalLayout_3->addWidget(setting);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_3->addWidget(checkBox);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton);

        addCritical = new QPushButton(centralWidget);
        addCritical->setObjectName(QString::fromUtf8("addCritical"));
        addCritical->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, addCritical);

        error = new QPushButton(centralWidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, error);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        horizontalLayout_4->addWidget(label);

        warnings = new QLineEdit(centralWidget);
        warnings->setObjectName(QString::fromUtf8("warnings"));
        warnings->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        warnings->setReadOnly(true);

        horizontalLayout_4->addWidget(warnings);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lableerror = new QLabel(centralWidget);
        lableerror->setObjectName(QString::fromUtf8("lableerror"));
        lableerror->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 25, 55);"));
        lableerror->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lableerror);

        errors = new QLineEdit(centralWidget);
        errors->setObjectName(QString::fromUtf8("errors"));

        horizontalLayout_5->addWidget(errors);


        verticalLayout->addLayout(horizontalLayout_5);


        formLayout->setLayout(6, QFormLayout::LabelRole, verticalLayout);

        table = new QTableWidget(centralWidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setStyleSheet(QString::fromUtf8("background-color:'lightGray' ;\n"
"selection-background-color:'red'"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, table);

        LogTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LogTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 4095, 22));
        LogTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LogTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LogTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LogTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LogTestClass->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton, lineEdit);

        retranslateUi(LogTestClass);

        QMetaObject::connectSlotsByName(LogTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *LogTestClass)
    {
        LogTestClass->setWindowTitle(QCoreApplication::translate("LogTestClass", "LogTest", nullptr));
        search->setText(QCoreApplication::translate("LogTestClass", "Search", nullptr));
        clear->setText(QCoreApplication::translate("LogTestClass", "Clear", nullptr));
        setting->setText(QCoreApplication::translate("LogTestClass", "Filter", nullptr));
        checkBox->setText(QCoreApplication::translate("LogTestClass", "Apply Filters", nullptr));
        pushButton->setText(QCoreApplication::translate("LogTestClass", "Add Info", nullptr));
        addCritical->setText(QCoreApplication::translate("LogTestClass", "Add Warn", nullptr));
        error->setText(QCoreApplication::translate("LogTestClass", "Add Error", nullptr));
        label->setText(QCoreApplication::translate("LogTestClass", "Warnings :", nullptr));
        lableerror->setText(QCoreApplication::translate("LogTestClass", "Errors:      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogTestClass: public Ui_LogTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGTEST_H
