#include<stdio.h>
int main()
{
	int n, m;
	printf("输入数组行数(1-20)：");
	scanf_s("%d", &n);
	printf("输入数组列数(1-20)：");
	scanf_s("%d", &m);
	int i, j, k, max, maxc = 0, a[20][20],flag;
	printf("输入数组：\n");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			scanf_s("%d", &a[i][j]);
	}
	printf("输入的数组为：\n");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		max = a[i][0];
		for (j = 0; j < m; j++)
			if (a[i][j] > max)
			{
			max = a[i][j];
			maxc = j;
			}
		flag = 1;  //先假设求得的数max为鞍点
		for (k = 0; k < n; k++)
		{
			if (max>a[k][maxc])
			{
				flag = 0;  //若max大于同列中其他任意数，则表示该数所在点不是鞍点
				continue;  //继续寻找鞍点
			}
		}
		if (flag)  //flag值为1表示是鞍点
		{
			printf("该数组的鞍点是a[%d][%d]=%d\n", i, maxc, max);
			break;
		}
	}
	if (!flag)
		printf("该数组无鞍点\n");
	printf("\n");
	return 0;
}
