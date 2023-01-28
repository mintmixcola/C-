#include <stdio.h>
#include <malloc.h>

/*���еĶ�̬����˳��洢�ṹ����*/
#define QUEUESIZE 100	//�����������󳤶�
typedef int ElemType;	//���еĴ洢����
typedef struct SqQueue
{
	ElemType *data;	//���д洢�ռ���׵�ַ
	int front;	//��ͷλ�ã�ָ��ǰ��ͷԪ�� 
	int rear;	//��βλ�ã�ָ���βԪ�ص���һ��λ�� 
 } SqQueue;	//ѭ������
  
 /*���г�ʼ��*/
 int InitQueue(SqQueue *q)
 {
 	q->data = (ElemType*)malloc(QUEUESIZE*sizeof(SqQueue));
 	if(q->data == NULL)	return 0;
 	q->front = q->rear;
 	return 1;
  } 
  
   /*����*/
   int EnQueue(SqQueue *q, ElemType *e) 
   {
   	if((q->rear + 1)%QUEUESIZE == q->front)	return 0;	//����
	   q->data[q->rear]=e;
	   q->rear = (q->rear + 1)%QUEUESIZE;	//��β����һλ
	   return 1; 
   }
   
    /*����*/
   int DeQueue(SqQueue *q, ElemType *e) 
   {
   	if(q->front == q->rear) return 0;	//����Ϊ��
	 *e = q->data[q->front];
	 q->front = (q->front +1)%QUEUESIZE;
	 return 1;   
   }
   
     /*����е�ͷԪ��*/
  int GetFront(SqQueue *q, ElemType *e)
  {
  	if(q->front == q->rear)	return 0;	//����Ϊ��
	 *e = q->data[q->front];	//*e = q->data[(rear-front + QUEUESIZE)%QUEUESIZE] ����е�βԪ�� 
	 return 1; 
   } 
void YangHuiTriangle()
{
	int j, n, N;
	ElemType x, temp;
	printf("������������%d");
	scanf("%d",&N);
	SqQueue Q;
	InitQueue (&Q);
	EnQueue (&Q, 1);	//��һ��Ԫ����� 
	for(n=2; n<=N+1; n++)
	{
		EnQueue (&Q, 1);	//��n�еĵ�һ��Ԫ�����
		//���ö��е�n-1��Ԫ�ز�����n�е��м�n-2��Ԫ�����
		for(int i=1; i<=n-2; i++)
		{
			DeQueue (&Q,&temp);
			printf("%3d", temp);	//��ӡ��n-1�е�Ԫ�� 
			GetFront(Q,&x);
			temp = temp + x;	//���ö��е�n-1��Ԫ�ز�����n��Ԫ��
			EnQueue (&Q,temp); 
		 } 
		 DeQueue (&Q, &x);
		 printf("%3d\n",x);	//��ӡ��n-1�е����һ��Ԫ��
		 EnQueue(&Q, 1);	//��n�е����һ��Ԫ����� 
	}
}
int main()
{
	YangHuiTriangle();
	return 0;
}
