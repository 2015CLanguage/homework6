#include <stdio.h>
void main()
{
	int a[11][11] = { 0 }, i, j;
	for (i = 0; i<10; i++)
	{
		a[i][0] = 1;
		for (j = 0; j<10; j++)
		{
			a[i + 1][j + 1] = a[i][j] + a[i][j + 1];
			if (a[i][j] != 0)
				printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
