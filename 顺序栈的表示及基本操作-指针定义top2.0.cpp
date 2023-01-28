/*ջ�Ķ�̬����˳��ṹ�洢����*/
#define STACK_INIT_SIZE 10	/*�洢�ռ��ʼ��������*/
#define STACK_INCREMENT 2	/*�洢�ռ��������*/
typedef int SElemType;
typedef struct SqStack
{
	SElemType *base;	/*ջ��ָ��*/ 
	int *top;	/*ջ��ָ��*/ 
	int stacksize;
 } SqStack;	/*˳��ջ*/ 

/*ָ��ָ��ջ��Ԫ��*/	
/*ջ�ĳ�ʼ��*/ 
int InitStack(SqStack *S)
/*�����ջ���ɹ�����1��ʧ�ܷ���0*/
{
	S->base =(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
	if(!S->base)
		return 0;	//�洢����ʧ�� 
	S->base = S->top + 1; 
	 S->stacksize = STACK_INIT_SIZE;
	 return 1;
 } 
 
 
 /*��ջ*/
 int Push(SqStack *S,SElemType e)
 /*����Ԫ��eΪ�µ�ջ��Ԫ�أ��ɹ�����1��ʧ�ܷ���2.*/
 {
 	if(S->top - S->base + 1>= S->stacksize)	//ջ����׷�Ӵ洢�ռ䡣
	 {
	 	S->base = (SElemType *)realloc(S->base,(S->stacksize + STACK_INCREMENT)*sizeof(SElemType));
	 	if(!(S->base))
	 	{
	 		return 0;	//�洢�ռ����ʧ�ܡ� 
		 }
		S->top = S->base + S->stacksize -1;
		S->stacksize +=  STACK_INCREMENT;
	  } 
	  *++S->top = e;
	  return 1;
  } 
  
  
  /*��ջ*/
  int Pop(SqStack *S,SElemType e) 
  /*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������1�����򷵻�0*/
  {
  	if(S->top == S->base - 1)	/*ջ��*/
	  return 0;
	  *e = *S->top--;
	  return 1; 
   } 
   
   /*ȡջ��Ԫ��*/
   int GetTop(SqStack *S,SElemType e)
   /*��ջ���գ�����e����S��ջ��Ԫ�أ�������1�����򷵻�0*/
   {
   	if(S.top >=S.base)
   	{
   		*e = (S.top);
   		return 1;
	   }
	   else
	   return 0;
	} 
