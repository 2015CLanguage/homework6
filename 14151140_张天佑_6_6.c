#include<stdio.h>
void main()
{
	int a[10][10], i, j;             //定义数组和变量
	for (i = 0; i<10; i++)           //使每一行首尾为1
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i<10; i++)           //每一个数字等于肩上两个数之和
	{
		for (j = 1; j<i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
	for (i = 0; i<10; i++)           //输出数组
	{
		for (j = 0; j <= i; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	printf("\n");
}
