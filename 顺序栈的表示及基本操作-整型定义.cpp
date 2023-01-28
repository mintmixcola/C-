#define STACKSIZE 100;	/*ջ�������󳤶�*/ 
typedef int SElemType;
typedef struct SqStack
{
	SElemType Stack[STACKSIZE]; 	/*ջ�洢�ռ�*/
	int top;	/*ջ��λ��*/ 
	int stacksize; 
}SqStack;	/*˳��ջ*/

/*ջ�ĳ�ʼ��*/
int InitStack (SqStack *S)
/*�����ջ���ɹ�����1��ʧ�ܷ���0*/
{
	S->top = -1;
	S->stacksize = STACKSIZE;
	return 1;
 } 
 
 /*��ջ*/
 int Push(SqStack *S,SElemType e)
 /*����Ԫ��eΪ�µ�ջ��Ԫ�أ��ɹ�����1��ʧ�ܷ���2.*/
 {
 	if(S->top >= S->stacksize - 1)	/*ջ����׷�Ӵ洢�ռ�*/
	 {
	 	return 0;
	  } 
	  S->Stack[++S->top] = e;
	  return 1;
  } 
  
  
  /*��ջ*/
  int Pop(SqStack *S,SElemType e) 
  /*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������1�����򷵻�0*/
  {
  	if(S->top < 0)	/*ջ��*/
	  {
	  	return 0;
	   } 
	   *e = S->Stack[S->top--];
	   return 1;
  }
  
  
   /*ȡջ��Ԫ��*/
   int GetTop(SqStack *S,SElemType e)
   /*��ջ���գ�����e����S��ջ��Ԫ�أ�������1�����򷵻�0*/
   {
   	if(S.top >= 0)
   	{
   		*e = S.Stack[S.top];
   		return 1;
	   }
	else
	return 0;   
   }
   
   /*��ջ�ղ���*/
   int StackEmpty(SqStack S)
   /*��SΪ��ջ���򷵻�1�����򷵻�0*/
   {
   	if(S.top >= 0)
   	return 1;
   	else
   	return 0;
	} 
