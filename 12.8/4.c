/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 8日 22:42:14
 ************************************************************************/
/*
 * 编写一个函数，反序排列一个单链表的所有节点。
 */
#include<stdio.h>

struct NODE{
	struct NODE * link;
	int			value;
};

struct NODE * sll_reverse(struct NODE * first)
{
	struct NODE * next;
	struct NODE * current;
	struct NODE * previous;

	if(first == NULL)
	{
		return NULL;
	}

	next = first;
	current = first;
	previous = first;
	while(next->link != NULL)
	{
		previous = current;
		current = next;
		next = next->link;
		if(current == first)
		{
			current->link = NULL;
		}
		else
			current->link = previous; 
	}
	
	next->link = current;

	return next;
}
/*
 * 从一个单链表中移队一个节点，
 * 如果链表不包含欲删除的节点，函数返回假，
 * 否则它就称除这个节点并返回真。
 */
int sll_remove(struct NODE **rootp, struct NODE *node)
{
	while()	

int main(void)
{
	struct NODE list[3] = {
		{&list[1], 3},
		{&list[2], 5},
		{NULL, 8}
	};

	struct NODE * first = sll_reverse(list);

	while(first != NULL)
	{
		printf("%d,", first->value);
		first = first->link;
	}

	return 0;
}
