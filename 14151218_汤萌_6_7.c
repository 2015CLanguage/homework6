#include<stdio.h>
int main()
{
	int n, i=0, i_1, j=0, j_1, k, x=0;
	int a[15][15]={0};
	printf("\n请输入15以内的奇数。");
	scanf_s("%d", &n);
	while (n%2==0)
	{
		printf("\n请输入奇数。");
		scanf_s("%d", &n);
	}

	j=n/2;
	a[0][j]=1;
	for (k=2; k<n*n+1; k++)
	{
		i_1=i;
		j_1=j;
		if(i-1<0 && j+1<=n-1)
		{
			i=n-1;
			j=j+1;
			x=1;
			printf("change%d\n", i);
		}
		
		if(j+1>n-1 && i-1>=0)
		{
			j=0;
			i=i-1;
			x=1;
			printf("change%d\n", j);
		}
		
		if(j>n-1 && i-1<0)
		{
			i=1;
			j=n-1;
			x=1;
			printf("change%d, %d\n", i, j);
		}
		
		if (x==0)
		{
			i--;
			j++;
		}

		if (a[i][j]!=0)
		{
			i=i+1;
			x=1;
		}
		


		printf("\n%d, %d\n, %d\n", i, j, k);
		a[i][j]=k;
		printf("%d", a[i][j]);
		
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	return 0;
}
