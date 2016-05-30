/*************************************************************************
	> File Name: 24.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年05月24日  8:11:28
 ************************************************************************/

#include<stdio.h>
/*w为静态变量
 *x为静态变量
 */
static int w = 5;
extern int x;
/*a b c都为自动变量
 */
static float
func1(int a, int b, int c)
{
	int d, e = 1;
	{		
		printf("%d\n", &d);
		int d, e, w;
		{
			int b, c, d;
			printf("%d\n", &d);
			static int y = 2;
		}
	}
	printf("%d\n", &d);
	{
		register int a, d, x;
		extern int y;
	}
}
static int y;

float
func2(int a)
{
	extern int y;
	static int z;
}

int main()
{
	func1(8,9,10);
	func2(15);
	return 0;
}
