/*队列的动态分配链式存储结构描述*/ 
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

/*队列初始化*/
int InitQueue(LinkQueue *q)
{
	q->front = q->rear = (QNode *)malloc(sizeof(QNode));
	if(q->front ==NULL)	return 0;
	q->front->next = NULL;
	return 1;
 } 
 
 /*求队列的头元素*/
 int GetFront(LinkQueue *q,ElemType *e)
 {
 	if(q->front == q->rear)	return 0;
 	*e = q->front->next->data;
 	return 1;
  } 
  
  /*进队*/
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
  
  /*出队*/
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
   
   
