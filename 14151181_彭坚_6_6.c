#include<stdio.h>
int main()
{
	int i, j, c, d, a[10][10];
	for (i = 0; i<10; i++)
		a[i][0] = a[i][i] = 1;
	for (i = 2; i<10; i++)
	{
		c = i;
		for (j = 1; j<c; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	}
	for (i = 0; i<10; i++)
	{
		d = i + 1;
		for (j = 0; j<d; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
