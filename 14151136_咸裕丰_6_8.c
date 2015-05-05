#include"stdio.h"
#define m 4
#define n 5
int main()
{
	int a[m][n],i,j,k,max,MAX,t;
	printf("请输入数组:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		MAX=a[i][0];
		max=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>MAX)
			{
				MAX=a[i][j];
				max=j;
			}
		}
		t=1;
		for(k=0;k<m;k++)
		{
			if(a[k][max]<MAX)
			{
			    t=0;
				break;
			}
		}
		if(t==1)
			printf("鞍点为:a[%d][%d]=%d\n",i,max,a[i][max]);
		break;
	}
	if(t==0)
		printf("没有鞍点\n");
	return 0;
}
