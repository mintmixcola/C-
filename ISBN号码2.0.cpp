#include <stdio.h>
int main()
{
	char a[13],*s =a;
	gets(a);
	int b,c,e,f,i,d = 1,sum = 0;
	for(i = 0;i < 13;i++)
	{
		b = a[i]-48;
		if(b >= 0 && b <= 9)
		{
			c = b * d;
			sum += c;
			d++;
		}
	}
//	printf("%d\n",sum);
	e = sum % 11;
	f = a[12]-48;
	if(e == f)
		printf("Right");
	else
	{
		if(e == 10)
		{
			a[12] ='X';
			puts(a);
		}
		else
		{
			a[12] = e+'0';
			puts(a);
		}
	}
	return 0;
}
