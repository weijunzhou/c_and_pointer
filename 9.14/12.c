/*************************************************************************
	> File Name: 12.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年07月 6日 19:22:37
 ************************************************************************/
/*
 * 数据加密和解密
 */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
/*
 * 准备密钥
 */
int prepare_key(char *key)
{
	int i = 0, j = 0, k = 0;
	/*
	 * 对key的所有字符判断是否重复
	 */
	while(*(key+i)!='\0')
	{
		/*
		 * 保存独一无二的字符，判断后面的字符是否与保存的重复
		 */
		for(j=0; j<k; j++)
		{
			if(*(key+j) == toupper(*(key+i)))
				break;
		}
		/*
		 * 保存不重复的字符
		 */
		if(j==k)
			*(key+k++) = toupper(*(key+i));

		i++;
	}
	/*
	 * 补足字母表中剩余的字符
	 */
	for(i=0; i<26; i++)
	{
		/*
		 * 判断key中是否有此字符
		 */
		for(j=0; j<k; j++)
		{
			if(*(key+j) == 'A' + i)
				break;
		}
		/*
		 * 保存不重复的字符
		 */
		if(j==k)
			*(key+k++) = 'A' + i;
	}
	return true;
}
/*
 * 加密程序
 */
void encrypt(char *data, char const *key)
{
	for(int i=0; i<strlen(data); i++)
	{
		if(!isalpha(*(data+i)))
			continue;
		if(islower(*(data+i)))
			*(data+i) = tolower(*(key+*(data+i)-'a'));
		else	
			*(data+i) = toupper(*(key+*(data+i)-'A'));
	}
}
/*
 * 解密程序
 */
void decrypt(char *data, char const *key)
{
	for(int i=0; i<strlen(data); i++)
	{
		if(!isalpha(*(data+i)))
			continue;
		if(islower(*(data+i)))
			*(data+i) = tolower(strchr(key, *(data+i))-key+'a');
		else	
			*(data+i) = toupper(strchr(key, *(data+i))-key+'A');
	}
}
int main(void)
{
	char key[28] = {0};
	char info[30] = {0};

	gets(key);

	prepare_key(key);

	puts(key);

	gets(info);

	encrypt(info, key);

	puts(info);

	decrypt(info, key);

	puts(info);

	return 0;
}
