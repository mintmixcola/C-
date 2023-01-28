#include <stdio.h>
int main()
{
	int a[5];
	int *p;
	int i;
	
	p = &a[0];
	for(i=0;i < 5; i++)
		scanf("%d", p++);
	for(i=0;i < 5; i++)
		printf("%4d",*p++);
	return 0;
}
