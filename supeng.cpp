#include <stdio.h>
#define p 3.14
double l;
double s;
double Perimeter(double r)
{
	l = 2 * p * r;

};
double Area(double r)
{
	s = p * r * r;
};
int main()
{
	double r;
	printf("������뾶r");
	scanf("%lf", &r);
	Perimeter(r);
	Area(r);
	printf("��Բ���ܳ�lΪ��%lf\n", l);
	printf("��Բ�����sΪ:%lf\n",s);
	return 0;
}
