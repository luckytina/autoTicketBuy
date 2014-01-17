#ifndef GLOBAL_H
#define GLOBAL_H

#include <string>
#include <stdio.h>
#include <stdlib.h>

#include <QMainWindow>
#include <QtNetwork>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QApplication>

#include "businessTool.h"
#include "httpTool.h"


class global
{
  public:
    static QString responseStr;
    static QNetworkAccessManager *qnam;
	static int iStep;
};

#endif // GLOBAL_H
