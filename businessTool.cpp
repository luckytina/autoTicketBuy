#include "businessTool.h"


bool createLocalCooike()
{
    //QUrl url("https://kyfw.12306.cn/otn/index/init");
	QUrl url("https://kyfw.12306.cn/otn/passcodeNew/getPassCodeNew?module=login&rand=sjrand");
    QNetworkReply *reply = global::qnam->get(QNetworkRequest(url));


	return 0;
}
