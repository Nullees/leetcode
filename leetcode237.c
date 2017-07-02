/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


#include "stdio.h"
#include "malloc.h"


 // Definition for singly-linked list.

 struct ListNode {
    int val;
    struct ListNode *next;
};


void deleteNode(struct ListNode* node) {
	struct ListNode *q;
	if(node->next!=NULL)
	q=node->next;
	node->next=node->next->next;
	free(q);
}


int main()
{
    struct ListNode a0;
	struct ListNode a;
	struct ListNode b;
	struct ListNode c;
	struct ListNode d;

    struct ListNode* p;

	int val1;

	a0.val="";a.val=1;d.val=4;c.val=3;b.val=2;

	a0.next=&a;

    a.next=&b;

	b.next=&c;

	c.next=&d;

	d.next=NULL;

	scanf("%d",&val1);
	p=&a0;
	while(p->next!=NULL)
	{
		if(p->next->val==val1)
			break;
		p=p->next;
	}
	deleteNode(p);


	p=a0.next;
	while(p!=NULL)
	{
	    if(p->next!=NULL)
		printf("%d->",(*p).val);
		else
            printf("%d",(*p).val);
		p=p->next;
	}


	return 0;
}


