#include<stdio.h>
void main()
{
	int i,j,arr[10][10];
	arr[0][0]=1;
	for(i=1;i<=9;i++)
	{
		arr[i][0]=1;
		arr[i][i]=1;
	}
	for(i=2;i<10;i++)
	{
		for(j=1;j<i;j++)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5d ",arr[i][j]);
		printf("\n");
	}
}
