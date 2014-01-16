#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qnam = new QNetworkAccessManager(this);
    QObject::connect(qnam, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(finishedSlot(QNetworkReply*)));
}

void MainWindow::finishedSlot(QNetworkReply *reply)
{
    QVariant statusCodeV =reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    QVariant redirectionTargetUrl =reply->attribute(QNetworkRequest::RedirectionTargetAttribute);
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  // bytes
        global::responseStr = QString::fromUtf8(bytes);

        reply->deleteLater();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 *执行抢票按钮
 */
void MainWindow::on_startButton_clicked()
{
    //抢票从此开始
    createLocalCooike();
    ui->textBrowser->setText(global::responseStr);
}

void MainWindow::on_topButton_clicked()
{

}

void MainWindow::on_loginRCVal_textEdited(const QString &arg1)
{

}

void MainWindow::on_ticketRCVal_textEdited(const QString &arg1)
{

}
