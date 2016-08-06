/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 6日 20:56:53
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
	int value;
	struct NODE *link;
}node;

int sll_insert(node **head, int value)
{
	node *current = NULL;
	node *newNode = (node*)malloc(sizeof(node));
	newNode->value = value;
	newNode->link = NULL;
	if(*head == NULL)
	{
		*head = newNode;
		//printf("%s() - %d\n", __func__, (*head)->value);
		return true;
	}
	current = *head;
	while(current->link != NULL)
	{
		current = current->link;
	}

	current->link = newNode;
	return true;
}

int main(void)
{
	node *head = NULL, *current = NULL;

	sll_insert(&head, 5);

	sll_insert(&head, 10);

	sll_insert(&head, 15);

	current = head;
	while(current->link != NULL)
	{
		printf("%d\n", current->value);
		current = current->link;
	}
	printf("%d\n", current->value);
	return 0;
}
