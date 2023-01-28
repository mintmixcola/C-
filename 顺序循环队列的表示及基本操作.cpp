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
  
  /*����г���*/
  int QueueLength(SqQueue *q)
  {
  	return (q->rear - q->front + QUEUESIZE)%QUEUESIZE;
  }
  
  /*����е�ͷԪ��*/
  int GetFrom(SqQueue *q, ElemType *e)
  {
  	if(q->front == q->rear)	return 0;	//����Ϊ��
	 *e = q->data[q->front];	//*e = q->data[(rear-front + QUEUESIZE)%QUEUESIZE] ����е�βԪ�� 
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
   
   
   
    
