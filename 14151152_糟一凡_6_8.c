#include<stdio.h>
int main()
{
	int a[100][100],i,j,m,n,p,max,min,sign=0,k=0,t=0,M,N;
	printf("请输入数组的行数和列数：");
	scanf("%d %d",&M,&N);
	printf("请输入一个%d行%d列的二维数组：\n",M,N);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(m=0;m<M;m++)
	{
		max=a[m][0];
		for(n=1;n<N;n++)
		{
			if(max<a[m][n])
			{
				max=a[m][n];
				k=n;
			}
		}
		min=a[0][k];
		for(p=1;p<M;p++)
		{
			if(min>a[p][k])
			{
				min=a[p][k];
				t=p;
			}
		}
		if(m==t)
		{
			printf("该二维数组中的鞍点为第%d行，第%d列的元素%d\n",m+1,k+1,a[m][k]);
			sign=1;
		}
	}
	if(sign==0)
	{
		printf("该二维数组没有鞍点\n");
	}
	return 0;
}
