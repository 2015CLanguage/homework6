#include "stdio.h"
void main()
{
	int a[10][10] = { { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 } }, i, j, m, n;//初始化数组和定义数字
	printf("请输入1~10间的奇数:\n");
	scanf("%d", &m);
	while (m<1 || m>10 || m % 2 == 0)     //判断输入正误
	{
		printf("输入错误,请重新输入:\n");
		scanf("%d", &m);
	}
	i = 1;                                 //第一行中间数字为1
	j = m / 2 + 1;
	a[1][j] = 1;
	for (n = 2; n <= m*m; n++)               //利用规则写出数表
	{
		i = i - 1;
		j = j + 1;
		if (i<1 && j>m)
		{
			i = i + 2;
			j = j - 1;
		}
		else
		{
			if (i<1)
				i = m;
			if (j>m)
				j = 1;
		}
		if (a[i][j] == 0)
			a[i][j] = n;
		else
		{
			i = i + 2;
			j = j - 1;
			a[i][j] = n;
		}
	}
	for (i = 1; i <= m; i++)           //输出魔方阵
	{
		for (j = 1; j <= m; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}
