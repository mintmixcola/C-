#include <stdio.h>
int main()
{
	int max;
	int i;
	int number;
	scanf("%d", &max);
	for(i = 2;i <= 1000; i++)
	{
		scanf("%d", &number);
		if(max < number)
		max = number;
		}
	printf ("%d", max);
	return 0;
 } 
