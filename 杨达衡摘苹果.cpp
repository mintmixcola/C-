#include <stdio.h>
int main()
{
	int a[10];
	int i,j,c,b=0;
	for(i = 0;i < 10;i++)
		scanf("%d", &a[i]);
	scanf("%d", &c);
	for(j = 0;j < 10;)
	{
		if(c + 30 >= a[j])
		{
			b += 1;
		}
		j++;
		}
	printf("%d", b);
	return 0;
}
