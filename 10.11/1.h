/*************************************************************************
	> File Name: 1.h
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 2日  9:32:36
 ************************************************************************/

#include<iostream>
using namespace std;

struct CODE{
	int m_areaCode;
	int m_swStation;
	int m_stationCode;
};

struct BILLINFO{
	int year;
	int month;
	int day;
	int time;
	struct CODE call;
	struct CODE calling;
	struct CODE bill;
};
