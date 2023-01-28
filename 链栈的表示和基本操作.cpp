/*ջ�Ķ�̬����ʹ洢�ṹ����*/
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

/*ջ�ĳ�ʼ��*/
viod InitStack(LinkStack *s)
{
	s->top = NULL;
}

/*��ջ*/
int push(LinkStack *s,ElemType e)
{
	LNode *p;
	p = (LNode*)malloc(sizeof(LNode));
	if(p == NULL)	return 0;
	p->data = e;
	p->next = s->top;
	s->top = p;
	return 1;
 } 
 
 /*��ջ*/
 int pop(LinkStack *s,ElemType *e) 
 {
 	LNode *p;
 	if(s->top == NULL)	return 0;
 	*e = s->top->data;
 	p = s->top;
 	s->top = s->top->next;
 	free(p);
 	return 1;
 }
 
 /*ȡջ��Ԫ��8*/
 int GetTop(LinkStack *s,ElemType *e) 
 {
 	if(s->top == NULL)	return 0;
 	else
 	{
 		*e = s.top->data;
 		return 1;
	 }
 }
 
 
