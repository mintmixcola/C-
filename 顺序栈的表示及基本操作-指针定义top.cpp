/*栈的动态分配顺序结构存储描述*/
#define STACK_INIT_SIZE 10	/*存储空间初始化分配量*/
#define STACK_INCREMENT 2	/*存储空间分配增量*/
typedef int SElemType;
typedef struct SqStack
{
	SElemType *base;	/*栈底指针*/ 
	int *top;	/*栈顶指针*/ 
	int stacksize;
 } SqStack;	/*顺序栈*/ 

/*指针指向栈顶元素的后一位*/	
/*栈的初始化*/ 
int InitStack(SqStack *S)
/*构造空栈，成功返回1，失败返回0*/
{
	S->base =(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
	if(!S->base)
		return 0;	//存储分配失败 
	S->top = S->base;
	 S->stacksize = STACK_INIT_SIZE;
	 return 1;
 } 
 
 
 /*入栈*/
 int Push(SqStack *S,SElemType e)
 /*插入元素e为新的栈顶元素，成功返回1，失败返回2.*/
 {
 	if(S->top - S->base >= S->stacksize)	//栈满，追加存储空间。
	 {
	 	S->base = (SElemType *)realloc(S->base,(S->stacksize + STACK_INCREMENT)*sizeof(SElemType));
	 	if(!(S->base))
	 	{
	 		return 0;	//存储空间分配失败。 
		 }
		S->top = S->base + S->stacksize;
		S->stacksize +=  STACK_INCREMENT;
	  } 
	  *S->top++ = e;
	  return 1;
  } 
  
  
  /*出栈*/
  int Pop(SqStack *S,SElemType e) 
  /*若栈不空，则删除S的栈顶元素，用e返回其值，并返回1，否则返回0*/
  {
  	if(S->top == S->base)	/*栈空*/
	  return 0;
	  *e = *--S->top;
	  return 1; 
   } 
   
   /*取栈顶元素*/
   int GetTop(SqStack *S,SElemType e)
   /*若栈不空，则用e返回S的栈顶元素，并返回1，否则返回0*/
   {
   	if(S.top >S.base)
   	{
   		*e = (S.top-1);
   		return 1;
	   }
	   else
	   return 0;
	} 
	
	
