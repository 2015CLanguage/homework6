#include<stdio.h>
int main()
{
	int i,j,k,max,maxj,flag,a[5][5];
	printf("请输入五行五列的矩阵：\n");
	for(i=0;i<5;i++)	
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<5;i++)
		{max=a[i][0];
		maxj=0;
		for(j=0;j<5;j++)
			if(max<=a[i][j])
			{	max=a[i][j];
			    maxj=j;
			}
		flag=1;
		for(k=0;k<5;k++)
			if(max>a[k][maxj])
			{
			flag=0;
			continue;
			}
		if(flag)
		{
			printf("a[%d][%d]=%d\n",i,maxj,max);
		break;
		}
		}
		if(!flag)
			printf("没有找到鞍点。\n");
		return 0;
}
