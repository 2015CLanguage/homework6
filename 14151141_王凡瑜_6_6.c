#include<stdio.h>
void main()
{
    int i,a[10][10]={0},k;
    printf("%d\n",a[0][0]=1);
    for(i=1;i<=9;i++)
	{
        printf("%d ",a[i][0]=1);
		for(k=1;k<=i;k++)
		{
			a[i][k]=a[i-1][k-1]+a[i-1][k];
			printf("%d ",a[i][k]);
		}
	printf("\n");
	}
}
