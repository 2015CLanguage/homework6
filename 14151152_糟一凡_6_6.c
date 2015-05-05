#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	for(i=0;i<10;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(m=0;m<10;m++)
	{
		for(n=0;n<=m;n++)
		{
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
	return 0;
}
