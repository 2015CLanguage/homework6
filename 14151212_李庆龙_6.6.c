# include <stdio.h>
int main()
{
	int list[10][10];
	int i, j;
	for (i = 0; i < 10;i++)
	{
		list[i][0] = 1;
		list[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			list[i][j] = list[i - 1][j - 1] + list[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-4d", list[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
