#include<stdio.h>
int main()
{
	int a[9][9],i,j;
	for(i=0;i<=9;i++)
	{
		a[i][i]=1;
	    a[i][0]=1;
	}
	for(i=2;i<=9;i++)
	{
		for(j=1;j<=i-1;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	}
	
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=i;j++)
		  printf("%6d",a[i][j]);
		printf("\n");
	}
	return 0;
}
