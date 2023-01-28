/*数制转换算法1*/
typedef int DataType;
viod conversion(int N,int r)
{
	SqStack S;	//定义一个顺序栈 
	DataType x;
	InitStack (&S);
	while(N)
	{
		Push(&S,N%r);	//余数进栈 
		N = N/r;
	}
	while(!StackEmpty (S))
	{
		Pop(&S,&x);
		printf("%d",x);	//输出出栈结果 
	}
 } 
 
 /*数制转换算法2*/
 #define NUM 10;
 viod conversion(int N,int r)
 {
 	int s[NUM],top;		//定义一个顺序栈 
 	int x;
 	top = -1;	//初始化栈 
 	while(N! = 0)
 	{
 		s[++top] = N % r;	//余数入栈 
 		N = N / r;	//商被作为被除数继续 
	 }
	while(top != -1)
	{
		x = s[top --];
		printf("%d",x);
	}
  } 
