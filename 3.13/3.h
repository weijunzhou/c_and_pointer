/*************************************************************************
	> File Name: 3.h
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年04月21日  9:02:44
 ************************************************************************/

#include<iostream>
#include<limits.h>
using namespace std;
#if UINT_MAX == 0xffff
typedef unsigned long uint32_t;
typedef long int32_t;
#else
typedef unsigned int uint32_t;
typedef int int32_t;
#endif
