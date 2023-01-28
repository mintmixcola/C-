#include <stdio.h>
int main()
{
	int i, j, b,k;
	for(b = 1; b<=10;b++)
	{
	for(i=10; i>0; i--)
	{
		int c;
		int s,q;
		c = b;
		for(j=1; j<i; j++)
		{
			q = c;
			s = b * q;
			printf("  %d * %d = %d", b, q, s); 
			c = c + 1;
			q = c + 1;
		}
		b = b + 1;
		printf("\n"); 
	}
	}
	return 0;
 } 
