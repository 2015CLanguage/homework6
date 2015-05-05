#include<stdio.h>
void main()
{
	int a[20][20]={0},n,i,j,x;
	printf("请输入一个1到20的奇数n作为阶数：");
	scanf("%d",&n);
	a[1][n/2+1]=1;
	i=1;
	j=n/2+1;
	for(x=2;x<=n*n;x++)
	{
		i=i-1;
		j=j+1;
		if(i<1 && j>n)      //上一个数在第一行第n列
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			if(i<1)          //上一个数在第一行
				i=n;
			if(j>n)          //上一个数在第n列
				j=1;
		}
		if(a[i][j]==0)       //a[i][j]位置没有填数
			a[i][j]=x;
		else
		{
			i=i+2;
			j=j-1;
			a[i][j]=x;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}
