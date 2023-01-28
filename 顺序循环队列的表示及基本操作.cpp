/*队列的动态分配顺序存储结构描述*/
#define QUEUESIZE 100	//队列允许的最大长度
typedef int ElemType;	//队列的存储类型
typedef struct SqQueue
{
	ElemType *data;	//队列存储空间的首地址
	int front;	//队头位置：指向当前队头元素 
	int rear;	//队尾位置：指向队尾元素的下一个位置 
 } SqQueue;	//循环队列
 
 /*队列初始化*/
 int InitQueue(SqQueue *q)
 {
 	q->data = (ElemType*)malloc(QUEUESIZE*sizeof(SqQueue));
 	if(q->data == NULL)	return 0;
 	q->front = q->rear;
 	return 1;
  } 
  
  /*求队列长度*/
  int QueueLength(SqQueue *q)
  {
  	return (q->rear - q->front + QUEUESIZE)%QUEUESIZE;
  }
  
  /*求队列的头元素*/
  int GetFrom(SqQueue *q, ElemType *e)
  {
  	if(q->front == q->rear)	return 0;	//队列为空
	 *e = q->data[q->front];	//*e = q->data[(rear-front + QUEUESIZE)%QUEUESIZE] 求队列的尾元素 
	 return 1; 
   } 
   
   /*进队*/
   int EnQueue(SqQueue *q, ElemType *e) 
   {
   	if((q->rear + 1)%QUEUESIZE == q->front)	return 0;	//队满
	   q->data[q->rear]=e;
	   q->rear = (q->rear + 1)%QUEUESIZE;	//队尾后移一位
	   return 1; 
   }
   
   /*出队*/
   int DeQueue(SqQueue *q, ElemType *e) 
   {
   	if(q->front == q->rear) return 0;	//队列为空
	 *e = q->data[q->front];
	 q->front = (q->front +1)%QUEUESIZE;
	 return 1;   
   }
   
   
   
    
