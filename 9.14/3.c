/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年07月 3日 14:48:51
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*
 *strcpy函数，不会溢出目标数组
 */
int my_strcpy(char *dst, char *src, int len)
{
	int i = 0;
	for(i = 0; i<len-1; i++)
	{
		if(src[i] != 0)
			dst[i] = src[i];
		else
		{
			dst[i] = 0;
			break;
		}
	}
	if(i==len-1)
		dst[i] = 0;
	return i;
}
/*
 * 连接字符串，不会超越数组边界
 */
char * my_strcat(char *dst, char *src, int len)
{
	int i = 0;
	int dstlen = strlen(dst);

	for(i=strlen(dst); i<len-1; i++)
	{
		if(src[i-dstlen] == 0)
		{
			dst[i] == 0;
			break;
		}
		dst[i] = src[i-dstlen];
	}
	if(i==len-1)
		dst[i-1] = 0;
	return dst;
}
/*
 * strcpy函数，返回目标字符串末尾的指针
 */
char *my_strcpy_end(char *dest, char *src)
{
	while((*dest++ = *src++) != '\0')
		break;

	return dest - 1;
}
/*
 * strrchr，返回指向ch字符在str字符串中最后一次出现的（最右边）的位置的指针
 */
char *my_strrchr(char const *str, int ch)
{
	int i = strlen(str);

	while(--i>=0 && *(str+i) == (char)ch)
	{
		return (char *)(str+i);
	}
	return NULL;
}
/*
 * strnchr，返回一个指向ch字符在str字符串中第n次出现的位置的指针
 */
char *my_strnchr(char const *str, int ch, int which)
{
	int count = 0;
	
	while(*str!='\0' && *str++ == (char)ch)
	{
		count++;
		if(count == which)
			return (char *)str;
	}
	return NULL;
}
/*
 * 返回匹配第二个参数所包含的字符的数量
 */
int count_chars(char const *str, char const *chars)
{
	int count = 0, i = 0;
	while(*str != '\0')
	{
		i = 0;
		while(*(chars+i) != '\0')
		{
			if(*str == *(chars+i++))
			{
				count++;
			}
		}
		str++;
	}
	return count;
}
/*
 * palindrome，判断字符串是否回文
 */
int palindrome(char *string)
{
	char *tmp = string+strlen(string)-1;

	while(!(tmp==string || tmp==string+1))
	{
		if(!isalpha(*tmp))
		{
			tmp--;
			continue;
		}
		if(!isalpha(*string))
		{
			string++;
			continue;
		}
		if(tolower(*string++) != tolower(*tmp--))
			return false;
	}
	return true;
}
/*
 * 对标准输入中单词the出现的次数进行计数
 */
int strcnt(char *string, char *substr)
{
	int count = 0;
	char *temp = string+strlen(string);
	while(string+3 != temp)
	{
		if(strncmp(string++, substr, 3) == 0)
			count++;
	}
	return count;
}

int main(void)
{
	char string[100] = {0};
	char string1[100] = {0};

	gets(string);
	puts(string);
	my_strcpy(string1, string, 100);
	my_strcat(string1, "hello world!", 100);
	puts(string1);
	printf("%d,%d\n", true, palindrome("Madam,I`m Adam"));
	printf("count:%d\n", strcnt("this is the first book I loved, the famous book","the"));
	return 0;
}
