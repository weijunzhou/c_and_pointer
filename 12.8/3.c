/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 7日 19:05:11
 ************************************************************************/
/*
 * 把一个新值插入到一个双链表中，rootp是一个指向根节点的指针，
 * value是需要插入的新值。
 * 返回值：如果链表原先已经存在这个值，函数返回0。
 * 如果新值分配内存失败，函数返回-1。
 * 如果新值成功地插入链表中，函数返回-1。
 */

#include<stdio.h>
#include<stdio.h>
typedef struct NODE{
	struct NODE *fwd;
	struct NODE *bwd;
	int			value;
}Node;

int dll_insert(register Node*rootp, int value)
{
	register Node *this;
	register Node *next;
	register Node *newNode;

	/*
	 * 查看value是否已经存在于链表中，如果是就返回。
	 * 否则，为新值创建一个新节点或("newnode"将指向它)
	 * "this"将指向应该在新节点之前的那个节点，
	 * "next"将指向应该在新节点之后的那个节点。
	 */

	for(this=rootp; (next=this->fwd)!=NULL; this=next)
	{
		if(next->value == value)
			return 0;
		if(next->value > value)
			break;
	}

	newnode = (Node*)malloc(sizeof(Node));
	if(newnode == NULL)
		return -1;
	newnode->value = value;

	/*
	 * 把新节点添加到链表中
	 */
	newnode->fwd = next;
	this->fwd = newnode;

	if(this != rootp)
		newnode->bwd = this;
	else
		newnode->bwd = NULL;

	if(next != NULL)
		next->bwd = newnode;
	else
		rootp->bwd = newnode;

	return 1;
}
/*
 * 从一个双链表中移除一个节点
 * 如果链表不包含欲移除的节点，函数就返回假，
 * 否则函数移除该节点并返回真。
 */
int dll_remove(struct NODE *rootp, struct NODE *node)
{

	return true;

