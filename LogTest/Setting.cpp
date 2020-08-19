#include "Setting.h"
#include <iostream>

QComboBox* Setting::get_functionBox()
{
	return cbx_functionBox;
}

QComboBox* Setting::get_fileBox()
{
	return cbx_fileBox;
}

QComboBox* Setting::get_threadBox()
{
	return cbx_threadBox;
}

QComboBox* Setting::get_frameBox()
{
	return cbx_frameBox;
}

QComboBox* Setting::get_levelBox()
{
	return cbx_levelBox;
}

QComboBox* Setting::get_ChannelBox()
{
	return cbx_channelBox;
}

QString Setting::get_Level()
{
	return m_level;
}

Setting::Setting(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	btn_ok = ui.ok;
	connect(btn_ok, SIGNAL(released()), this, SLOT(set_filters()));
	cbx_levelBox =ui.levelBox;
	cbx_functionBox = ui.functionsNames;
	cbx_fileBox = ui.filesNames;
	cbx_threadBox = ui.threadNo;
	cbx_frameBox = ui.frameNo;
	cbx_channelBox = ui.channelNo;
	m_level = "DEBUG";
}

Setting::~Setting()
{
}

void Setting::set_filters()
{
	m_level = cbx_levelBox->currentText();
	close();
}