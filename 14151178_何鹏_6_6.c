#include "stdio.h"
void main()
{
	int i,j;
	int a[10][10]={{1}};
	for(i=1;i<10;i++)
	{
		a[i][0]=1;
		for(j=1;j<10;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i][j]==0)break;
			printf("%5d",a[i][j]);
		}
    printf("\n");
	}
}
