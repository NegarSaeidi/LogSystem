#pragma once

#include <QWidget>
#include "ui_Setting.h"
#include <qdialog.h>
#include <QPushButton>
#include <QComboBox>
class Setting : public QDialog
{
	Q_OBJECT
public:
	QComboBox* get_functionBox();
	QComboBox* get_fileBox();
	QComboBox* get_threadBox();
	QComboBox* get_frameBox();
	QComboBox* get_levelBox();
	QComboBox* get_ChannelBox();
	QString get_Level();
	Setting(QWidget *parent = Q_NULLPTR);
	~Setting();
private:
	QComboBox* cbx_levelBox, * cbx_functionBox, * cbx_fileBox, * cbx_threadBox, * cbx_frameBox, *cbx_channelBox;
	QPushButton* btn_ok;
	QString m_level;
	Ui::Setting ui;
private slots:
	void set_filters();
};
