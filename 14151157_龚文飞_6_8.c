#include"stdio.h"
void main()
{
	int i, j, m, a[5][5], max, maxj, flag;
	printf("请输入数组\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 5; i++)
	{
		max = a[i][0];
		maxj = 0;
		for (j = 0; j < 5;j++)
			if (max < a[i][j])
			{
			max = a[i][j];
			maxj = j;
			}
		for (m = 0; m < 5; m++)
		{
			if (max>a[m][maxj])
				flag = 0;
			else
			flag = 1;
		}
		if (flag)
		{
			printf("a[%d][%d]=%d\n", i, maxj, max);
			break;
		}
		if (!flag)
			printf("无鞍点！\n");

	}
}
