#include<stdio.h>
void main()
{
	int a[10][10],i,j;//申请10行10列的二维数组
	for(i=0;i<10;i++)
	{a[i][i]=1;
	a[i][0]=1;}   //第一列和对角线上全为1
	for(i=2;i<10;i++)
	{
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];//这一个数等于它肩上俩数和
	}
	for(i=0;i<10;i++)
	{for(j=0;j<i+1;j++)
	printf("%5d",a[i][j]);
	printf("\n");
	}
	printf("\n");
}
