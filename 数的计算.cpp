#include<stdio.h>
int main()
{
	int ove[100000]= {1};
    int j,i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        for (j=0;j<=i/2;j++)
            ove[i]+=ove[j];
    printf("%d", ove[n]);
    return 0;
}
