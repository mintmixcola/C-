/*����ת���㷨1*/
typedef int DataType;
viod conversion(int N,int r)
{
	SqStack S;	//����һ��˳��ջ 
	DataType x;
	InitStack (&S);
	while(N)
	{
		Push(&S,N%r);	//������ջ 
		N = N/r;
	}
	while(!StackEmpty (S))
	{
		Pop(&S,&x);
		printf("%d",x);	//�����ջ��� 
	}
 } 
 
 /*����ת���㷨2*/
 #define NUM 10;
 viod conversion(int N,int r)
 {
 	int s[NUM],top;		//����һ��˳��ջ 
 	int x;
 	top = -1;	//��ʼ��ջ 
 	while(N! = 0)
 	{
 		s[++top] = N % r;	//������ջ 
 		N = N / r;	//�̱���Ϊ���������� 
	 }
	while(top != -1)
	{
		x = s[top --];
		printf("%d",x);
	}
  } 
