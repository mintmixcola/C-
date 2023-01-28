#include <stdio.h>
#include <malloc.h>

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
   
     /*求队列的头元素*/
  int GetFront(SqQueue *q, ElemType *e)
  {
  	if(q->front == q->rear)	return 0;	//队列为空
	 *e = q->data[q->front];	//*e = q->data[(rear-front + QUEUESIZE)%QUEUESIZE] 求队列的尾元素 
	 return 1; 
   } 
void YangHuiTriangle()
{
	int j, n, N;
	ElemType x, temp;
	printf("请输入行数：%d");
	scanf("%d",&N);
	SqQueue Q;
	InitQueue (&Q);
	EnQueue (&Q, 1);	//第一行元数入队 
	for(n=2; n<=N+1; n++)
	{
		EnQueue (&Q, 1);	//第n行的第一个元素入队
		//利用队中第n-1行元素产生第n行的中间n-2个元素入队
		for(int i=1; i<=n-2; i++)
		{
			DeQueue (&Q,&temp);
			printf("%3d", temp);	//打印第n-1行的元素 
			GetFront(Q,&x);
			temp = temp + x;	//利用队中第n-1行元素产生第n行元素
			EnQueue (&Q,temp); 
		 } 
		 DeQueue (&Q, &x);
		 printf("%3d\n",x);	//打印第n-1行的最后一个元素
		 EnQueue(&Q, 1);	//第n行的最后一个元素入队 
	}
}
int main()
{
	YangHuiTriangle();
	return 0;
}
