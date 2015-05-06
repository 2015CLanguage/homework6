#include "stdio.h"
void main()
{
	int n, i, j, k;
	printf("请输入n:");
	scanf("%d", &n);
	int a[100][100] = { { 0 } };
	if (n % 2 != 0)
	{
		for (i = 0, j = n / 2, k = 1; k <= n*n; i--, j++, k++)
		{
			a[i][j] = k;
			if (k%n == 0)
			{
				i = i + 2;
				j = j - 1;
			}
			else
			{
				if (i == 0)i = n;
				if (j == n - 1)j = -1;
			}
		}
	}
	else
	{
		if (n % 4 == 0)
		{
			k = 1;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++, k++)
				{
					if (i % 4 != j % 4 && i % 4 != 3 - j % 4)
						a[i][j] = k;
					else continue;
				}
			}
			k = 1;
			for (i = n - 1; i >= 0; i--)
			{
				for (j = n - 1; j >= 0; j--, k++)
				{
					if (i % 4 == j % 4 || i % 4 == 3 - j % 4)
						a[i][j] = k;
					else continue;
				}
			}
		}
		else
		{
			for (i = 0, j = n / 4, k = 1; k <= n*n / 4; i--, j++, k++)
			{
				a[i][j] = k;
				if (k % (n / 2) == 0)
				{
					i = i + 2;
					j = j - 1;
				}
				else
				{
					if (i == 0)i = n / 2;
					if (j == n / 2 - 1)j = -1;
				}
			}
			for (i = n / 2, j = 3 * n / 4, k = n*n / 4 + 1; k <= n*n / 2; i--, j++, k++)
			{
				a[i][j] = k;
				if (k % (n / 2) == 0)
				{
					i = i + 2;
					j = j - 1;
				}
				else
				{
					if (i == n / 2)i = n;
					if (j == n - 1)j = n / 2 - 1;
				}
			}
			for (i = 0, j = 3 * n / 4, k = n*n / 2 + 1; k <= 3 * n*n / 4; i--, j++, k++)
			{
				a[i][j] = k;
				if (k % (n / 2) == 0)
				{
					i = i + 2;
					j = j - 1;
				}
				else
				{
					if (i == 0)i = n / 2;
					if (j == n - 1)j = n / 2 - 1;
				}
			}
			for (i = n / 2, j = n / 4, k = 3 * n*n / 4 + 1; k <= n*n; i--, j++, k++)
			{
				a[i][j] = k;
				if (k % (n / 2) == 0)
				{
					i = i + 2;
					j = j - 1;
				}
				else
				{
					if (i == n / 2)i = n;
					if (j == n / 2 - 1)j = -1;
				}
			}
			int t;
			t = a[n / 4][n / 4];
			a[n / 4][n / 4] = a[3 * n / 4][n / 4];
			a[3 * n / 4][n / 4] = t;
			for (j = 0; j < n / 4; j++)
			{
				for (i = 0; i < n / 2; i++)
				{
					if (i == n / 4 && j == 0)continue;
					else
					{
						t = a[i][j];
						a[i][j] = a[i + n / 2][j];
						a[i + n / 2][j] = t;
					}
				}
			}
			for (j = n - 1; j > 3 * n / 4 + 1; j--)
			{
				for (i = 0; i < n / 2; i++)
				{
					t = a[i][j];
					a[i][j] = a[i + n / 2][j];
					a[i + n / 2][j] = t;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
