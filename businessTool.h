#ifndef BUSINESSTOOL_H
#define BUSINESSTOOL_H

#include "global.h"


/*
 *生成本地Cooike
 */
bool createLocalCooike();

/*
 *向12306获取登录验证码 /otn/passcodeNew/getPassCodeNew?module=login&rand=sjrand
 */
bool getPassCodeNew();

/*
 *界面输入验证码，向12306验证验证码是否正确 （事件控制，全局变量验证码值和是否验证成功，不成功再次获取验证码）
 */
bool validLoginPassCode();

/*
 *组织登录页面参数向12306提交登录 /otn/login/loginAysnSuggest
 */
bool loginAysnSuggest();

/*
 * 查询页面判断是否登录成功 /otn/index/init
 */
bool checkPageLoginSucc();

/*
 * 根据起始站、终点站、购买日期查询车次数据（JSON）
 *   /otn/leftTicket/query?leftTicketDTO.train_date=2014-01-26&leftTicketDTO.from_station=BJP&leftTicketDTO.to_station=SJP&purpose_codes=ADULT
 */
bool query();

/*
 * 分析车次数据，根据输入的所有车次和所有席位，并依据席位优先顺序分析是否有合适的票，写入全局变量
 */
bool parseQueryTicketData();

/*
 *如果有票，进入提交订单前处理/otn/confirmPassenger/autoSubmitOrderRequest
 */
bool autoSubmitOrderRequest();

/*
 * 进入订单队列 /otn/confirmPassenger/getQueueCountAsync
 */
bool getQueueCountAsync();

/*
 *向12306获取订单验证码 /otn/passcodeNew/getPassCodeNew.do?module=login&rand=sjrand&0.5166343386632657
 */
bool getTicketPassCodeNew();

/*
 * 界面输入验证码，向12306验证验证码是否正确 （事件控制，全局变量验证码值和是否验证成功，不成功再次获取验证码）
 */
bool validTicketPassCode();

/*
 *订单提交 /otn/confirmPassenger/confirmSingleForQueueAsys
 */
bool confirmSingleForQueueAsys();

/*
 *查询12306生成的订单编号,多次查询 /otn/confirmPassenger/queryOrderWaitTime?random=1389532091799&tourFlag=dc&_json_att=
 */
bool queryOrderWaitTime();

/*
 *查询已订购的车票信息 /otn/queryOrder/queryMyOrderNoComplete
 */
bool queryMyOrderNoComplete();

/*
 *席位由最初页面编码转换为订单专用代码
    swz_num商务座  9
    tz_num特等座 P
    zy_num一等座 M
    ze_num二等座 0 大写字母
    gr_num高级软卧 6
    rw_num软卧 4
    yw_num硬卧 3
    rz_num软座
    yz_num硬座 1
    wz_num无座 1
 */
std::string seatConevrt(std::string seatCode);

/*
 * 席位由最初页面编码转换为订单专用代码
    swz_num商务座  9
    tz_num特等座 P
    zy_num一等座 M
    ze_num二等座 0
    gr_num高级软卧 6
    rw_num软卧 4
    yw_num硬卧 3
    rz_num软座
    yz_num硬座 1
    wz_num无座 1
 */
std::string seatConevrtCodeToName(std::string seatCode);

/*
 * 查询车站对应的站码
    /otn/resources/js/framework/station_name.js
 */
bool queryStationCode();

/*
 * 分析站码字符串
 */
std::string getStationCodeBaseName(std::string cityName);

/*
 *查询所有联系人信息
 */
bool queryPassengerInfos();

/*
 *从内存联系人抽取要买票的指定联系人的信息
    返回数据如passengerTicketStr=O,0,1,刘伟华,1,130128198608270939,15300318473,N_O,0,1,佘振国,1,230305197808044317,18618487656,N&oldPassengerStr=刘伟华,1,130128198608270939,1_佘振国,1,230305197808044317,1_
              passengerTicketStr=O,0,1,刘伟华,1,130128198608270939,15300318473,N_O,0,1,刘楠楠,1,370725198506180682,,N&oldPassengerStr=刘伟华,1,130128198608270939,1_刘楠楠,1,370725198506180682,1_
    O,0,1,刘伟华,1,130128198608270939,15300318473,N
    席位，，，姓名，，省份证号，手机号，国家简称
 */
std::string getPassengerTicketStr();

/*
 * 从内存联系人抽取要买票的指定联系人的信息
    返回数据如passengerTicketStr=O,0,1,刘伟华,1,130128198608270939,15300318473,N_O,0,1,佘振国,1,230305197808044317,18618487656,N&oldPassengerStr=刘伟华,1,130128198608270939,1_佘振国,1,230305197808044317,1_
              passengerTicketStr=O,0,1,刘伟华,1,130128198608270939,15300318473,N_O,0,1,刘楠楠,1,370725198506180682,,N&oldPassengerStr=刘伟华,1,130128198608270939,1_刘楠楠,1,370725198506180682,1_
 */
std::string getOldPassengerStr();



#endif // BUSINESSTOOL_H
