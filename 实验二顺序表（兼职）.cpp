#include<stdio.h>
int A[10];
int B[10];
int x;

int input()
{
	pirntf("��Ӽ�������˳���A������Ԫ�أ�\n")
	int i = 0;
	for(;i<6;i++)
	{
		int a;
		pirntf("�������%d��A��Ԫ�أ�",i);
		scanf("%d",&a);
		A[i] = a;
	 } 
	pirntf("��Ӽ�������˳���B������Ԫ�أ�\n")
	int j = 0;
	for(;j<5;j++)
	{
		int b;
		pirntf("�������%d��A��Ԫ�أ�",i);
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
	printf("��������Ҫ���ҵ�����")
	int c;
	scanf("%d",&c);
	int i=0;
	for(;i<7;i++)
	{
		if(A[i] == c){
			break;
		}
	 } 
	 printf("������A�е�˳��Ϊ��%d",i);
}


int main()
{
	input();
	charu();
	deleteB();
	find();
	return 0;
 } 
