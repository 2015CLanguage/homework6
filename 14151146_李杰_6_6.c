#include<stdio.h>
int main()
{
	int i,j,rect[10][10]={{1},{1},{1},{1},{1},{1},{1},{1},{1},{1}};
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			rect[i][j]=rect[i-1][j-1]+rect[i-1][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5d",rect[i][j]);
		printf("\n");
	}
	return 0;
}
