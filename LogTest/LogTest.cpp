#include "LogTest.h"
#include <Windows.h>
#include <iostream>

LogTest::LogTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    m_warningCount = 0;
    end = 0;
    m_errorCount = 0;
    m_rowCount = 0;
    btn_clearFilters = false;
    m_settingWindow = new Setting(this);
    btn_infoLog  = ui.pushButton;
    btn_criticalLog = ui.addCritical;
    btn_errorLog = ui.error;
    start = GetTickCount();
    tbl_table = ui.table;
    tbl_table->setColumnCount(9);
    QStringList list;
    list << "Time (from)" << "Time (to)"<< "Function" << "Level"<< "File::Line"  << "Thread" << "Channel" << "Frame" << "Description";
    tbl_table->setHorizontalHeaderLabels(list);
    tbl_table->horizontalHeader()->setStretchLastSection(true);
    tbl_table->verticalHeader()->setVisible(false);
    tbl_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    btn_search = ui.search;
    txt_lineEdit = ui.lineEdit;
    btn_clear = ui.clear;
    btn_setting = ui.setting;
    checkBox = ui.checkBox;
    txt_warningBox = ui.warnings;
    txt_errorBox = ui.errors;
    m_check = new bool[tbl_table->rowCount()];
    for (int i = 0; i < tbl_table->rowCount(); i++)
        m_check[i-1] = false;
    connect(btn_infoLog, SIGNAL(released()), this, SLOT(log()));
    connect(btn_criticalLog, SIGNAL(released()), this, SLOT(produce_warnLog()));
    connect(btn_errorLog, SIGNAL(released()), this, SLOT(produce_errorLog()));
    connect(btn_search, SIGNAL(released()), this, SLOT(search_inDescriptionField()));
    connect(btn_clear, SIGNAL(released()), this, SLOT(clear_table()));
    connect(btn_setting, SIGNAL(released()), this, SLOT(create_settingWindow()));
    connect(checkBox, SIGNAL(clicked()), this, SLOT(update_table()));  
  
}

void LogTest::add_recordsToTable(Log log)
{
    QColor color(QColor("green"));
    tbl_table->insertRow(tbl_table->rowCount());
  
    end = GetTickCount();
    double dif = difftime(end, start);
    tbl_table->setItem(tbl_table->rowCount() - 1, 0, new QTableWidgetItem(QString::number(start/1000)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 1, new QTableWidgetItem(QString::number(end/1000)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 2, new QTableWidgetItem(log.funct));
    tbl_table->setItem(tbl_table->rowCount() - 1, 3, new QTableWidgetItem(log.level));
    QString fileLine = log.fileName + "::" + QString::fromStdString((std::to_string(log.line)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 4, new QTableWidgetItem(fileLine));
    tbl_table->setItem(tbl_table->rowCount() - 1, 5, new QTableWidgetItem(QString::number(log.threadNo)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 6, new QTableWidgetItem(QString::number(log.channelNo)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 7, new QTableWidgetItem(QString::number(log.frameNo)));
    tbl_table->setItem(tbl_table->rowCount() - 1, 8, new QTableWidgetItem(log.Description));
    
    if (log.level == "WARN")
    txt_warningBox->setText(QString::number(++m_warningCount));
    else if (log.level == "ERROR")
    txt_errorBox->setText(QString::number(++m_errorCount));
    m_threadList.push(QString::number(log.threadNo));
    m_frameList.push(QString::number(log.frameNo));
    m_functionsList.push(log.funct);
    m_filesList.push(log.fileName);
    m_channelList.push(QString::number(log.channelNo));
  
}


void LogTest::select_filters()
{
    m_level = m_settingWindow->get_levelBox()->currentText();
   
   
    for (int i = 0; i < tbl_table->rowCount(); i++)
    {
        if (m_level == "DEBUG")
        {
            tbl_table->setRowHidden(i, false);
            m_check[i] = true;
        }
        else  if (m_level == "INFO")
        {
            if ((tbl_table->item(i, 3)->text() == "INFO") || (tbl_table->item(i, 3)->text() == "WARN") || (tbl_table->item(i, 3)->text() == "ERROR"))
            {
               tbl_table->setRowHidden(i, false);
                m_check[i] = true; 
            }
            else
                tbl_table->setRowHidden(i, true);
        }
        else  if (m_level == "WARN")
        {
          
            if ( (tbl_table->item(i, 3)->text() == "WARN") || (tbl_table->item(i, 3)->text() == "ERROR"))
            {
               tbl_table->setRowHidden(i, false);
                m_check[i] = true;
            }
            else
                tbl_table->setRowHidden(i, true);
        }
        else
        {
            if(tbl_table->item(i, 3)->text() == "ERROR")
            {
                tbl_table->setRowHidden(i, false);
               m_check[i] = true;
            }
            else
                tbl_table->setRowHidden(i, true);
        }
        if (m_check[i] == true)
        {
            if ((tbl_table->item(i, 2)->text() != m_settingWindow->get_functionBox()->currentText()) &&
                (m_settingWindow->get_functionBox()->currentText() != "All") ||
                (!(tbl_table->item(i, 4)->text().contains(m_settingWindow->get_fileBox()->currentText())) &&
                    (m_settingWindow->get_fileBox()->currentText() != "All") ||
                    (tbl_table->item(i, 5)->text() != m_settingWindow->get_threadBox()->currentText()) &&
                    (m_settingWindow->get_threadBox()->currentText() != "All") ||
                    (tbl_table->item(i, 6)->text() != m_settingWindow->get_ChannelBox()->currentText()) &&
                    (m_settingWindow->get_ChannelBox()->currentText() != "All") ||
                    (m_settingWindow->get_frameBox()->currentText() != "All") &&
                    (tbl_table->item(i, 7)->text() != m_settingWindow->get_frameBox()->currentText())))
            {
                tbl_table->setRowHidden(i, true);
                m_check[i] = false;
            }
            else
            {
                tbl_table->setRowHidden(i, false);
             
            }
        }
    }
}
void LogTest::log()
{
    Log logSample{ 0.0, "InfoButtonPressed", __FUNCTION__, "INFO", "infoFile", 1,1, 1, __LINE__ };
    add_recordsToTable(logSample);
}

void LogTest::search_inDescriptionField()
{
    QString filterKeyWord=txt_lineEdit->text() ;
    if (filterKeyWord != NULL)
    {
        for (int i = 0; i < tbl_table->rowCount(); i++)
        {
            if (!(tbl_table->item(i, 8)->text().contains(filterKeyWord) ))
            {
                    tbl_table->setRowHidden(i,true);
            }
        }
    }
    else
    {
        for (int i = 0; i < tbl_table->rowCount(); i++)
        {
                    tbl_table->setRowHidden(i, false);
        }
    }
}

void LogTest::produce_warnLog()
{
    for (int i = 0; i < 10; i++)
    
        add_recordsToTable({ 0.0, "WarnButtonPressed", __FUNCTION__, "WARN", "warnFile", 2,2, 2,  __LINE__ });
}

void LogTest::produce_errorLog()
{
    for (int i = 0; i< 10; i++)
    {
        Log logSample{ 0.0, "ErrorButtonPressed", __FUNCTION__, "ERROR", "errorFile", 3,3, 3, __LINE__ };
        add_recordsToTable(logSample);
    }
}

void LogTest::clear_table()
{
    while (tbl_table->rowCount() > 0)
    {
        tbl_table->removeRow(0);
    }
    txt_warningBox->setText(QString::number(0));
    m_warningCount = 0;
    m_errorCount = 0;
    txt_errorBox->setText(QString::number(0));
}

void LogTest::create_settingWindow()
{
    add_filterBoxesContents();
    m_settingWindow->show();
    m_level = m_settingWindow->get_Level();
}

void LogTest::update_table()
{
    if (checkBox->checkState())
        select_filters();
   else
        clear_filters();
}

void LogTest::clear_filters()
{
    for (int i = 0; i < tbl_table->rowCount(); i++)
    {
            tbl_table->setRowHidden(i, false);
            m_check[i] = false;
    }
}


void LogTest::add_filterBoxesContents()
{
    while (!m_functionsList.empty())
    {
        if (m_settingWindow->get_functionBox()->findText(m_functionsList.top()) >= 0)
        {
            m_functionsList.pop();
        }
        else
        {
            m_settingWindow->get_functionBox()->addItem(m_functionsList.top());
            m_functionsList.pop();
        }
    }
    while (!m_filesList.empty())
    {
        if (m_settingWindow->get_fileBox()->findText(m_filesList.top()) >= 0)
        {
            m_filesList.pop();
        }
        else
        {
            m_settingWindow->get_fileBox()->addItem(m_filesList.top());
            m_filesList.pop();
        }
    }
    while (!m_threadList.empty())
    {
        if (m_settingWindow->get_threadBox()->findText(m_threadList.top()) >= 0)
        {
            m_threadList.pop();
        }
        else
        {
            m_settingWindow->get_threadBox()->addItem(m_threadList.top());
            m_threadList.pop();
        }
    }
    while (!m_frameList.empty())
    {
        if (m_settingWindow->get_frameBox()->findText(m_frameList.top()) >= 0)
        {
            m_frameList.pop();
        }
        else
        {
            m_settingWindow->get_frameBox()->addItem(m_frameList.top());
            m_frameList.pop();
        }
    }
    while (!m_channelList.empty())
    {
        if (m_settingWindow->get_ChannelBox()->findText(m_channelList.top()) >= 0)
        {
            m_channelList.pop();
        }
        else
        {
            m_settingWindow->get_ChannelBox()->addItem(m_channelList.top());
            m_channelList.pop();
        }
    }
}




