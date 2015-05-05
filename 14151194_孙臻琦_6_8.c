#include<stdio.h>
int main()
{
	int i,j,k,maxj,max,min,flag,a[4][4];
	printf("请输入数组\n");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<4;i++)
	{
		max=a[i][0];
		maxj=0;
		for(j=0;j<4;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		flag=1;
		for(k=0;k<4;k++)
			if(a[k][maxj]<max)
			{
				flag=0;
				continue;
			}
		if(flag)
		{
			printf("鞍点为第%d行第%d列的%d\n",i+1,maxj+1,max);
			break;
		}
	}
	if(!flag)
		printf("不存在鞍点\n");
	return 0;
}
