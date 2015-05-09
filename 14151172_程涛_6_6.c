#include <stdio.h>
void main()
{
	int i,j,a[10][10];
	for(i=0;i<10;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	printf("1");
	for(i=1;i<10;i++)
	{
		printf("\n%d",a[i][0]);
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
			printf(" %d",a[i][j]);
		}
		printf(" 1");
	}
	printf("\n");
}
