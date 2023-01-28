#include <stdio.h>
int main()
{
	int a;
	double b;
	double c;
	printf("请输入你的年龄：");
	scanf("%d", &a);
	printf("请输入你的体重（单位公斤）：");
	 
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
	 printf("您一天人体基础代谢需要的基本热量为%lf千卡。", b);
	return 0;
}
