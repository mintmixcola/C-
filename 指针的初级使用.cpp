#include <stdio.h>
int main()
{
	int a = 11111;
	int *p;
	
	p = &a;
	printf("a=%d\n",a);
	printf("*p=%d\n",*p);
	printf("&a=0x%p,p=0x%p",&a,p);//�������a�ĵ�ַ 
	return 0;
 } 
