#include<stdio.h>
void main()
{
	int i,j,k,max,a[100][100],n,m,flag,r;
	puts("请输入行数：");
	scanf("%d",&m);
	puts("请输入列数：");
	scanf("%d",&n);
	puts("请依次输入各个数据：");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		r=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max) 
			{
				max=a[i][j];
				r=j;
			}
		}
		flag=1;
		for(k=0;k<m;k++)
		{
			if(a[k][r]<max) 
			{
				flag=0;
				continue;
			}
		}
		if(flag) break;

	}
	puts("the result is:");
	if(flag==0) 
		printf("no answer\n");
	else
	    printf("a[%d][%d]=%d\n",i,r,a[i][r]);
}

