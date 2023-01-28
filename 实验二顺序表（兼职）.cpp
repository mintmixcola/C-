#include<stdio.h>
int A[10];
int B[10];
int x;

int input()
{
	pirntf("请从键盘输入顺序表A的数据元素：\n")
	int i = 0;
	for(;i<6;i++)
	{
		int a;
		pirntf("请输入第%d个A的元素：",i);
		scanf("%d",&a);
		A[i] = a;
	 } 
	pirntf("请从键盘输入顺序表B的数据元素：\n")
	int j = 0;
	for(;j<5;j++)
	{
		int b;
		pirntf("请输入第%d个A的元素：",i);
		scanf("%d",&b);
		B[j] = b;
	 } 
	 
}

int charu()
{
	x = 0;
	int i = 0;
	for(;A[i] >38;i++){
		
	}
	i -= 1;
	int j = 6;
	for(;j > 4;j--)
	{
		A[j] = A[j-1];
	}
	A[3] = 38;
	x = 1
	return x;
}

int deleteB()
{
	x=0;
	int i=2;
	for(;i<4;i++)
	{
		B[i] = B[i+1];
	}
	B[4] = 0;
	x=1;
	return x;
}

int find()
{
	printf("请输入您要查找的数：")
	int c;
	scanf("%d",&c);
	int i=0;
	for(;i<7;i++)
	{
		if(A[i] == c){
			break;
		}
	 } 
	 printf("该数在A中的顺序为：%d",i);
}


int main()
{
	input();
	charu();
	deleteB();
	find();
	return 0;
 } 
