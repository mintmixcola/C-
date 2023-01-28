/*���еĶ�̬������ʽ�洢�ṹ����*/ 
typedef int ElemType;
typedef struct QNode
{
	ElemType data;
	struct QNode *next;
}QNode;

typedef struct
{
	QNode *front;
	QNode *rear;
}LinkQueue;

/*���г�ʼ��*/
int InitQueue(LinkQueue *q)
{
	q->front = q->rear = (QNode *)malloc(sizeof(QNode));
	if(q->front ==NULL)	return 0;
	q->front->next = NULL;
	return 1;
 } 
 
 /*����е�ͷԪ��*/
 int GetFront(LinkQueue *q,ElemType *e)
 {
 	if(q->front == q->rear)	return 0;
 	*e = q->front->next->data;
 	return 1;
  } 
  
  /*����*/
  int EnQueue(LinkQueue *q,ElemType *e) 
  {
  	QNode *p = (QNode *)malloc(sizeof(QNode));
  	if(p == NULL) return 0;
  	p->data = e;
  	p->next = NULL;
  	q->rear->next = p;
  	q->rear = p;
  	return 1;
  }
  
  /*����*/
  int DeQueue(LinkQueue *q,ElemType *e)
  {
  	QNode *p;
  	if(q->front == q->rear)	return 0;
  	p = q->front->next;
  	if(q->rear == p)
  		q->rear = q->front;
  	free(p);
  	return 1;
   } 
   
   
