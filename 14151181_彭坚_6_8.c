#include<stdio.h>
#define N 3
#define M 3
int main()
{
	int i, j, max, min, m, n, a[N][M];
	printf("请输入数组：\n");
	for (i = 0; i<N; i++)
	{
		for (j = 0; j<M; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i<N; i++)
	{
		max = a[i][0];
		for (j = 1; j<M; j++)
		{
			if (max<a[i][j])
			{
				max = a[i][j];
				n = i;
				m = j;
			}
		}
		min = a[0][m];
		for (i = 1; i<N; i++)
		{
			if (min>a[i][m])
				min = a[i][m];
		}
		if (max == min)
			printf("鞍点是：a[%d][%d]=%d\n", n, m, a[n][m]);
		else
			printf("此数组无鞍点\n");
	}
	return 0;
}
