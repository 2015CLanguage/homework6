#include<stdio.h>
int main()
{
	int i, j, n=3;
	int a[11][11]={{0}};
	a[1][1]=1;
	for (i=2; i<11; i++)
	{
		for (j=1; j<n; j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		n=n++;
	}
	n=2;
	for (i=1; i<11; i++)
	{
		for (j=1; j<n; j++)
			printf("%6d", a[i][j]);
		n++;
		printf("\n");
	}
	return 0;
}
