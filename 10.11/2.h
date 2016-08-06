/*************************************************************************
	> File Name: 2.h
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 2日 10:22:06
 ************************************************************************/

#include<iostream>
using namespace std;
struct CASHSALE{
	float m_suggestedRetailPriceOfManufacturer;
	float m_actualSellingPrice;
	float m_salesTax;
	float m_licensingFee;
};
struct LOANSALE{
	float m_suggestedRetailPriceOfManufacturer;
	float m_actualSellingPrice;
	float m_salesTax;
	float m_licensingFee;
	float m_downPayment;
	int   m_loanDuration;
	float m_interestRate;
	float m_monthlyPayment;
	char  m_szNameOfBank[21]
};
struct RENTING{ 
	float m_suggestedRetailPriceOfManufacturer;
	float m_actualSellingPrice;
	float m_downPayment;
	float m_securityDeposit;
	float m_monthlyPayment;
	int   m_leaseTerm;
};
struct INFO{
	char m_szNameOfCustomer[21];
	char m_szAddrOfCustomer[21];
	char m_szModel[21];
	enum {cash,load,renting} m_transType;
	union{
		CASHSALE a;
		LOADSALE b;
		RENTING  C;
	}transaction;
};
