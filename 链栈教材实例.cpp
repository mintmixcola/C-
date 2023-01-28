#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode;

typedef struct LinkStack
{
	LNode *top;
}LinkStack;

void InitStack(LinkStack *s)
{
	s->top=NULL;
}

int GetTop(LinkStack s,ElemType *e)
{
	if (s.top==NULL) return 0;
	else
	{
		*e=s.top->data;
		return 1;
	}
}

int push(LinkStack *s,ElemType e)
{
	LNode *p;
	p=(LNode*)malloc(sizeof(LNode));
	if(p==NULL)return 0;
	p->data=e;
	p->next=s->top;
	s->top=p;
	return 1;
}

int pop(LinkStack *s,ElemType *e)
{
	LNode *p;
	if(s->top==NULL)return 0;
	*e=s->top->data;
	p=s->top;
	s->top=s->top->next;
	free(p);
	return 1;
}

int StackEmpty(LinkStack s)
{
	if(s.top==NULL)return 1;
	else return 0;
}

int main()
{
	ElemType e;
	LinkStack s;
	InitStack(&s);
	push(&s,3);push(&s,4);push(&s,5);push(&s,6);
	pop(&s,&e);
	printf("出栈的元素为%d\n",e);
	push(&s,7);
	pop(&s,&e);
	printf("出栈的元素为%d\n",e);
	push(&s,8);
	printf("栈中元素依次出栈：");
	while(s.top!=NULL)
	{
		pop(&s,&e);
		printf("%3d",e);
	}
	printf("\n");
	return 0;
}