#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LogTest.h"
#include <qwidget.h>
#include <QTableWidget>
#include <stdio.h>
#include <time.h>
#include <QPushButton>
#include <qlineedit.h>
#include "Setting.h"
#include <QCheckBox>
#include <stack> 
#include <QTableView>
using namespace std;
struct Log
{
    float time;
    QString Description, funct, level, fileName;
    int channelNo, frameNo, threadNo, line;
};

class LogTest : public QMainWindow
{
    Q_OBJECT

public:
    LogTest(QWidget *parent = Q_NULLPTR);
private:
    stack <QString> m_functionsList,m_filesList,m_threadList,m_frameList,m_channelList;
    QString m_level;
    bool  * m_check;
    int m_warningCount,m_errorCount, m_rowCount;
    QCheckBox* checkBox;
    QPushButton* btn_infoLog, *btn_search,*btn_criticalLog, *btn_clear,*btn_setting, *btn_clearFilters,*btn_errorLog;
    QLineEdit* txt_lineEdit, * txt_warningBox, * txt_errorBox;
    time_t start, end;
    QTableWidget* tbl_table;
    Setting* m_settingWindow;
    Ui::LogTestClass ui;
private:
    void select_filters();
    void add_recordsToTable(Log);
    void clear_filters();;
    void add_filterBoxesContents();
    
 private slots:
    void log();
    void search_inDescriptionField();
    void produce_warnLog();
    void produce_errorLog();
    void clear_table();
    void create_settingWindow();
    void update_table();
 
   
};
