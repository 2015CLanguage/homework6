#include "stdio.h"
void main()
{
	int a[4][4], i, j, num=0, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 4; k++)
			if (a[i][j] < a[i][k]) break;
			if (k == 4)
			{
				for (k = 0; k < 4; k++)
				if (a[i][j] > a[k][j]) break;
				if (k == 4)
				{
					printf("鞍点为(%d,%d),%d\n", i + 1, j + 1, a[i][j]);
					num++;
				}
			}
		}
	}
	if (num == 0) printf("无鞍点");
}
