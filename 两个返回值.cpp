#include <stdio.h>
void tworetval(int a, int b, int *addval, int *subval)
{
	int sum,cha;
	sum = a + b;
	cha = a - b;
	*addval = sum;
	*subval = cha;
	return ;
}
int main()
{
	
	return 0;
 } 
