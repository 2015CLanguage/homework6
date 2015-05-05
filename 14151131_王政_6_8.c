#include<stdio.h>
int main()
{
	int i,j,k,a[3][3],maxj,t=0,x=0,y=0,r,m=0,M,N;
	printf("请依次输入数组的行数和列数：");
	scanf("%d %d",&M,&N);
	printf("请输入一个%d行%d列的二维数组：\n",M,N);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[x][y]<a[i][j])
			{
			    x=i;
			    y=j;
			    maxj=a[x][y];
			}
		}
		for(k=0;k<M;k++)
		{
			if(a[k][y]<a[x][y])
			{
				t++;
			}
		}
		if(t==0)
		{
		m=1;
		printf("该数组的第%d行，第%d列的%d是鞍点.",x+1,y+1,maxj);
		}
	}
	if(m==0)
	{
		printf("该数组无鞍点.");
	}
	return 0;
}
