#include<stdio.h>
void main()
{
	int a[10][10],i,j;
	a[0][0]=1;   //确定第一个数字为1
	printf("%5d",a[0][0]);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		a[i][0]=1;   //确定第一列数字为1
		printf("%5d",a[i][0]);
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];  //中间数字为其肩上的数字之和
			printf("%5d",a[i][j]);
		}
	a[i][i]=1;   //确定对角线数字为1
	printf("%5d",a[i][i]);
	printf("\n");
	}
}
