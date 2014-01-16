#include "global.h"

/*
 *业务流程描述：
 *启动界面
 *定义全局变量
 *获取界面上用户、密码、起始站、终点站、购票人、车次、席位、购买日期
 *点击“自动抢票”按钮开始执行 (主函数)
 *生成本地Cooike
 *向12306获取登录验证码 /otn/passcodeNew/getPassCodeNew?module=login&rand=sjrand
 *界面输入验证码，向12306验证验证码是否正确 （事件控制，全局变量验证码值和是否验证成功，不成功再次获取验证码）
 *组织登录页面参数向12306提交登录 /otn/login/loginAysnSuggest
 *页面中转查询 /otn/login/userLogin
 *查询页面判断是否登录成功 /otn/index/init
 *如果登录失败，继续登录，执行成功继续
 *根据起始站、终点站、购买日期查询车次数据（JSON）
 *   /otn/leftTicket/query?leftTicketDTO.train_date=2014-01-26&leftTicketDTO.from_station=BJP&leftTicketDTO.to_station=SJP&purpose_codes=ADULT
 *分析车次数据，根据输入的所有车次和所有席位，并依据席位优先顺序分析是否有合适的票，写入全局变量
 *如果有票，进入提交订单前处理/otn/confirmPassenger/autoSubmitOrderRequest
 *进入订单队列 /otn/confirmPassenger/getQueueCountAsync
 *向12306获取订单验证码 /otn/passcodeNew/getPassCodeNew.do?module=login&rand=sjrand&0.5166343386632657
 *界面输入验证码，向12306验证验证码是否正确 （事件控制，全局变量验证码值和是否验证成功，不成功再次获取验证码）
 *订单提交 /otn/confirmPassenger/confirmSingleForQueueAsys
 *查询12306生成的订单编号,多次查询 /otn/confirmPassenger/queryOrderWaitTime?random=1389532091799&tourFlag=dc&_json_att=
 *查询已订购的车票信息 /otn/queryOrder/queryMyOrderNoComplete
 */


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    global::qnam = w.qnam;
    w.show();



    return a.exec();
}
