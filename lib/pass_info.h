/* vi: set sw=4 ts=4:
 *
 * Copyright (C) 2001 - 2007 Christian Hohnstaedt.
 *
 * All rights reserved.
 */

#ifndef __PASS_INFO_H
#define __PASS_INFO_H

#include <QString>
#include <QObject>

#include "widgets/MainWindow.h"

class QWidget;

class pass_info: public QObject
{
		Q_OBJECT
   private:
	QString title;
	QString description;
	QWidget *widget;
	QString type;
	QString pixmap;

   public:
	pass_info(QString t, QString d, QWidget *w = NULL);
	QString getTitle()
	{
		return title;
	}
	QString getDescription()
	{
		return description;
	}
	QWidget *getWidget()
	{
		return widget;
	}
	QString getType()
	{
		return type;
	}
	QPixmap getImage()
	{
		return pixmap;
	}
	void setTitle(QString t)
	{
		title = t;
	}
	void setDescription(QString d)
	{
		description = d;
	}
	void setWidget(QWidget *w)
	{
		widget = w;
	}
	void setPin();
};

#endif
