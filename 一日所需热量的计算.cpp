#include <stdio.h>
int main()
{
	int a;
	double b;
	double c;
	printf("������������䣺");
	scanf("%d", &a);
	printf("������������أ���λ�����");
	 
	scanf("%lf", &c); 
	if(a <= 30)
	{
		b = 15.2 *  c + 680;
	 } 
	 else if(a >= 31 && a <= 60)
	 {
	 	b = 11.5 * c +830;
	 }
	 else 
	 {
	 	b = 13.4 * c + 490;
	 }
	 printf("��һ�����������л��Ҫ�Ļ�������Ϊ%lfǧ����", b);
	return 0;
}
