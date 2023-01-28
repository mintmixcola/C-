#include <stdio.h>
int main()
{
	int a[5] = { 11, 22, 33, 44, 55};
	int *p;
	int i;
	p = &a[0];
	for(i=0;i < 5; i++)
		printf("%4d",*p++); 
	return 0;
 } 
