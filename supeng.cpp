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
	printf("请输入半径r");
	scanf("%lf", &r);
	Perimeter(r);
	Area(r);
	printf("该圆的周长l为：%lf\n", l);
	printf("该圆的面积s为:%lf\n",s);
	return 0;
}
