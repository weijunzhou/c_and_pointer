/*************************************************************************
	> File Name: 6.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月23日 14:25:43
 ************************************************************************/
/*
 * 将amount表示的值转换为单词形式
 */
#include<stdio.h>
#include<string.h>
const char* char_num[] = {
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine",
	"ten",
	"eleven",
	"twelve",
	"thirteen",
	"fourteen",
	"fifteen",
	"sixteen",
	"seventeen",
	"eighteen",
	"ninetenn",
	"twenty",
	"thirty",
	"forty",
	"fifty",
	"sixty",
	"seventy",
	"eighty",
	"ninety"
};
const char *char_thousand[3] = {
	"thousand",
	"million",
	"billion"
};
void written_amount(unsigned int amount, char *buffer)
{
	unsigned int quotient = 0;
	unsigned int remainder = 0;
	static int thousand = 0;
	
	thousand++;
	if((quotient=amount/1000)!=0)
		written_amount(quotient, buffer);
	
	remainder = amount%1000;
	quotient = remainder/100;
	remainder %= 100;
	if(quotient != 0)
		sprintf(buffer+strlen(buffer), "%s hundred and ", char_num[quotient-1]);
	if(remainder <= 20)
		sprintf(buffer+strlen(buffer), "%s ", char_num[remainder-1]);
	else
	{
		quotient = remainder/10;
		remainder %= 10;
		if(remainder == 0)
			sprintf(buffer+strlen(buffer), "%s ", char_num[quotient+20-3]);
		else
			sprintf(buffer+strlen(buffer), "%s %s ",char_num[quotient+20-3], char_num[remainder-1]);
	}
	if(thousand>=2)
		sprintf(buffer+strlen(buffer), "%s ", char_thousand[thousand-2]);
	thousand--;
}

int main(void)
{
	char buffer[1024] = {0};
	written_amount(16312, buffer);
	puts(buffer);

	return 0;
}
