#include<stdio.h>
int main()
{
	int a[10][10]={1},i,j;
	
	for(i=1;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			if (j==0)
				a[i][j]=1;
			else 
			{
				for(j=1;j<=i;j++)
					a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5d",a[i][j]);
		printf("%\n");
	}
	return 0;
}
