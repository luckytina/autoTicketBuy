#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);

    qnam = new QNetworkAccessManager(this);
    QObject::connect(qnam, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(finishedSlot(QNetworkReply*)));

}

void MainWindow::finishedSlot(QNetworkReply *reply)
{
	connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),
        this, SLOT(slotError(QNetworkReply::NetworkError)));
	connect(reply, SIGNAL(sslErrors(QList<QSslError>)),
        this, SLOT(slotSslErrors(QList<QSslError>)));

    QVariant statusCodeV =reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    QVariant redirectionTargetUrl =reply->attribute(QNetworkRequest::RedirectionTargetAttribute);
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  // bytes

		//json test
		QJsonParseError jsonpe;
		QJsonDocument json = QJsonDocument::fromJson(bytes, &jsonpe);
		if (jsonpe.error == QJsonParseError::NoError)
		{
			if (json.isObject())
			{
				QJsonObject obj = json.object();
				if (obj.contains("error"))
				{
					qDebug() << "error:" << obj["error"];
				}
				else
				{
					QJsonArray jarray = obj["invlist"].toArray();
					for (int row = 0; row < jarray.size(); row++)
					{
						qDebug() << "====Row[" << row << "] Start===================";
						QJsonObject jobj = jarray[row].toObject();
						for (QJsonObject::Iterator it = jobj.begin();
							 it != jobj.end(); it++)
						{
							qDebug() << it.key() << " => " << it.value();
						}
					}
				}
			}
			else
			{
				qDebug() << "error, shoud json object";
			}
		}
		else
		{
			qDebug() << "error:" << jsonpe.errorString();
		}

		//step1
		if(1==global::iStep)
		{
			QPixmap tmp;
			tmp.loadFromData(bytes);
			ui.lblCode1->setPixmap(tmp);
		}
		//step2
		if(2==global::iStep)
		{
			QPixmap tmp;
			tmp.loadFromData(bytes);
			ui.lblCode2->setPixmap(tmp);

		}
        global::responseStr = QString::fromUtf8(bytes);
		ui.textBrowser->setText(global::responseStr);

		

		//QLocale locPath("");
		//ui.graphicsView->setLocale(locPath);

        reply->deleteLater();
    }
}

MainWindow::~MainWindow()
{

}

void MainWindow::startbtnSlot()
{
	//抢票从此开始
    createLocalCooike();
    
}

void MainWindow::commitStep1()
{
	if(ui.loginRCVal->text().length()==4)
	{
		ui.textBrowser->setText(ui.loginRCVal->text());
		global::iStep++;
	}
}

void MainWindow::commitStep2()
{
	if(ui.ticketRCVal->text().length()==4)
	{
		ui.textBrowser->setText(ui.ticketRCVal->text());
		global::iStep++;
	}
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
