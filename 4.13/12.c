/*************************************************************************
	> File Name: 12.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 1日  8:40:43
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	bool isLeapYear = 0;
	int year;

	scanf("%d", &year);
	if(year%4==0 && (year%100!=0 || year%400==0))
	{
		isLeapYear = 1;
	}
	printf("%s\n", isLeapYear==1?"Leap Year":"not Leap Year");
	return 0;
}
