#include <stdio.h>
union test
{
	int a;
	char b;
};
int main()
{
	union test yangzhu;
	yangzhu.a = 100;
	printf("%d\n", yangzhu.a);
	yangzhu.b ='A';
	printf("%d",yangzhu.a);
	return 0;
}
