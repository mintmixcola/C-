/*栈的动态分配和存储结构描述*/
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

/*栈的初始化*/
viod InitStack(LinkStack *s)
{
	s->top = NULL;
}

/*入栈*/
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
 
 /*出栈*/
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
 
 /*取栈顶元素8*/
 int GetTop(LinkStack *s,ElemType *e) 
 {
 	if(s->top == NULL)	return 0;
 	else
 	{
 		*e = s.top->data;
 		return 1;
	 }
 }
 
 
