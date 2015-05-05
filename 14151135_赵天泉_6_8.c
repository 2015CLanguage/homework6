#include<stdio.h>
#define N 4
#define M 5
int main()
{
	int i,j,k,a[N][M],max,maxj,flag;
	printf("请输入五行五列的数组:\n");
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			max=a[i][0];
			maxj=0;
			if(max<a[i][j])
			{
				max=a[i][j];
				maxj=j;
			}
			flag=1;
		}
		for(k=0;k<N;k++)
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
		printf("没有鞍点");
	printf("\n");
	return 0;
}

