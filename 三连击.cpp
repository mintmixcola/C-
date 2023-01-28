#include<stdio.h>
int main()
{int i,j,a[3],c[3],b[3],d[9]={0},flage=1;
for(i=123;i<=327;i++)
{ flage=1;	
	a[0]=i%10;
	a[1]=(i/10)%10;
	a[2]=(i/100)%10;
	for(j=0;j<3;j++)
	{ if(a[j]==1) d[0]=1;
	else if(a[j]==2) d[1]=1;
	else if(a[j]==3) d[2]=1;
	else if(a[j]==4) d[3]=1;
	else if(a[j]==5) d[4]=1;
	else if(a[j]==6) d[5]=1;
	else if(a[j]==7) d[6]=1;
	else if(a[j]==8) d[7]=1;
	else if(a[j]==9) d[8]=1;
	}
	b[0]=(2*i)%10;
	b[1]=(2*i/10)%10;
	b[2]=(2*i/100)%10;
		for(j=0;j<3;j++)
	{ if(b[j]==1) d[0]=1;
	else if(b[j]==2) d[1]=1;
	else if(b[j]==3) d[2]=1;
	else if(b[j]==4) d[3]=1;
	else if(b[j]==5) d[4]=1;
	else if(b[j]==6) d[5]=1;
	else if(b[j]==7) d[6]=1;
	else if(b[j]==8) d[7]=1;
	else if(b[j]==9) d[8]=1;
	
	}

	c[0]=(3*i)%10;
	c[1]=(3*i/10)%10;
	c[2]=(3*i/100)%10;
		for(j=0;j<3;j++)
	{ if(c[j]==1) d[0]=1;
	else if(c[j]==2) d[1]=1;
	else if(c[j]==3) d[2]=1;
	else if(c[j]==4) d[3]=1;
	else if(c[j]==5) d[4]=1;
	else if(c[j]==6) d[5]=1;
	else if(c[j]==7) d[6]=1;
	else if(c[j]==8) d[7]=1;
	else if(c[j]==9) d[8]=1;

	}
	for(j=0;j<9;j++)
	if(d[j]==0)
	flage=0;
	if(a[2]<b[2]&&b[2]<c[2]&&flage==1)//重点最高位是数组最后一个。
	printf("%d %d %d\n",i,2*i,3*i);
	
    for(j=0;j<9;j++)
   { d[j]=0;}
}
return 0;
 }

