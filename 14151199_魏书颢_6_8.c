#include"stdio.h"
void main()
{
	int a[4][5],i,j,max,maxj,k,flag;
	printf("请输入一个4*5的数组");
	for(i=0;i<4;i++)
	{	for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<4;i++)
	{	for(j=0;j<5;j++)
			printf("%5d",a[i][j]);
	        printf("\n");
	}
	for(i=0;i<4;i++)
	{
		
		max=a[i][0];
		maxj=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
			    maxj=j;
		}
		flag=1;
		for(k=0;k<4;k++)
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
		printf("不存在鞍点\n");
	



}
