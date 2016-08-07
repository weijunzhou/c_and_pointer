/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 7日 17:04:23
 ************************************************************************/

#include<stdio.h>
typedef struct NODE{
	int value;
	struct NODE *link;
}node;

int sll_count(node*head)
{
	int count = 0;
	node*current = head;
	while(current->link != NULL)
	{
		count++;
		current = current->link;
	}
	count++;

	return count;
}

node* sll_search(node*head, int value)
{
	node *current=head;

	while((current->value != value)&&(current->link != NULL))
	{
		current = current->link;
	}

	if(current->value == value)
		return current;
	else
		return NULL;
}

	
