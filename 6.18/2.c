/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月20日 16:04:31
 ************************************************************************/
/*
 * 删除一个字符串的一部分
 */
#include<stdio.h>
int del_substr(char *str, char const *substr)
{
	int strIdx = 0;
	int substrIdx = 0;
	if(*substr==0)
	{
		return 1;
	}
	if(*str==0)
	{
		return 0;
	}
	while(*(str+strIdx)!=0)
	{
		substrIdx = 0;
		while(*(substr+substrIdx)!=0)
		{
			if(*(str+strIdx+substrIdx)!=*(substr+substrIdx))
			{
				break;
			}
			substrIdx++;
		}
		if(*(substr+substrIdx)==0)
		{
			break;
		}
		else
		{
			strIdx += substrIdx+1;
		}
	}
	if(*(str+strIdx)==0)
	{
		return 1;
	}
	while(*(str+strIdx)!=0)
	{
		*(str+strIdx)=*(str+strIdx+substrIdx);
		strIdx++;
	}
	return 0;
}
#define SWAP(x,y) {char tmpStr=x;x=y;y=tmpStr;}
void reverse_string(char *string)
{
	int strLen = 0;
	int strIdx = 0;
	while(*(string+strLen++)!=0);
	printf("%d\n", strLen);	
	for(strIdx=0; strIdx<(strLen-1)/2; strIdx++)
	{
		SWAP(*(string+strIdx), *(string+strLen-strIdx-2));
	}

}
int main(void)
{
	char str[50];

	gets(str);
	del_substr(str, "cde");
	puts(str);
	reverse_string(str);
	puts(str);
	return 0;
}
