#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "global.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QNetworkAccessManager *qnam;

private slots:
	void startbtnSlot();

	void commitStep1();

	void commitStep2();

    void on_topButton_clicked();

    void on_loginRCVal_textEdited(const QString &arg1);

    void finishedSlot(QNetworkReply *reply);

    void on_ticketRCVal_textEdited(const QString &arg1);

private:
    Ui::MainWindow ui;

};

#endif // MAINWINDOW_H
