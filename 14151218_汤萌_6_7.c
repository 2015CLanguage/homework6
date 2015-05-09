#include<stdio.h>
int main()
{
	int n, i = 0, j = 0, k;
	int a[15][15] = { 0 };
	printf("\n请输入15以内的奇数。");
	scanf("%d", &n);
	while (n % 2 == 0)
	{
		printf("\n请输入奇数。");
		scanf_s("%d", &n);
	}
	printf("%d×%d魔方阵为：\n", n, n);
	j = n / 2;
	a[0][j] = 1;
	for (k = 2; k < n*n + 1; k++)
	{
		i--;
		j++;
		if (i < 0 && j > n - 1)
		{
			i+=2;
			j--;
		}
		else if (i < 0)
		{
			i = n - 1;
		}
		else if (j > n - 1)
		{
			j = 0;
		}
		if (a[i][j] != 0)
		{
			i=i+2;
			j--;
			if (i > n - 1)
				i = 0;
			if (j < 0)
				j = n - 1;
		}
		a[i][j] = k;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
