#define STACKSIZE 100;	/*栈允许的最大长度*/ 
typedef int SElemType;
typedef struct SqStack
{
	SElemType Stack[STACKSIZE]; 	/*栈存储空间*/
	int top;	/*栈顶位置*/ 
	int stacksize; 
}SqStack;	/*顺序栈*/

/*栈的初始化*/
int InitStack (SqStack *S)
/*构造空栈，成功返回1，失败返回0*/
{
	S->top = -1;
	S->stacksize = STACKSIZE;
	return 1;
 } 
 
 /*入栈*/
 int Push(SqStack *S,SElemType e)
 /*插入元素e为新的栈顶元素，成功返回1，失败返回2.*/
 {
 	if(S->top >= S->stacksize - 1)	/*栈满，追加存储空间*/
	 {
	 	return 0;
	  } 
	  S->Stack[++S->top] = e;
	  return 1;
  } 
  
  
  /*出栈*/
  int Pop(SqStack *S,SElemType e) 
  /*若栈不空，则删除S的栈顶元素，用e返回其值，并返回1，否则返回0*/
  {
  	if(S->top < 0)	/*栈空*/
	  {
	  	return 0;
	   } 
	   *e = S->Stack[S->top--];
	   return 1;
  }
  
  
   /*取栈顶元素*/
   int GetTop(SqStack *S,SElemType e)
   /*若栈不空，则用e返回S的栈顶元素，并返回1，否则返回0*/
   {
   	if(S.top >= 0)
   	{
   		*e = S.Stack[S.top];
   		return 1;
	   }
	else
	return 0;   
   }
   
   /*判栈空操作*/
   int StackEmpty(SqStack S)
   /*若S为空栈，则返回1，否则返回0*/
   {
   	if(S.top >= 0)
   	return 1;
   	else
   	return 0;
	} 
