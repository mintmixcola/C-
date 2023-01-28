#include <stdio.h>
int main()
{
	int a;
	double free;
	scanf("%d", &a);
	if(a <= 150)
	{
		free = a * 0.4463;
	}
	else if(a > 150 && a <= 400)
	{
		free = 150 * 0.4463 + (a - 150) * 0.4663; 
	}
	else
	{
		free = 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
	}
	printf("%.1f", free);
	return 0;
 } 
