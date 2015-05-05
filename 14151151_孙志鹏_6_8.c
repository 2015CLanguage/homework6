#include<stdio.h>
#define N 4
#define M 5
int main()
{
	int i,j,k,a[N][M],MAX,MAXj,flag;
	printf("输入数组:\n");
	for(i=0;i<N;i++);
		for(j=0;j<M;j++);	
			scanf("%d",&a[i][j]);
	for(i=0;i<N;i++)
	{
		MAX=a[i][0];
		MAXj=0;
		for(j=0;j<M;j++)
			if(a[i][j]>MAX)
			{
				MAX=a[i][j];
				MAXj=j;
			}
		flag=1;
		for(k=0;k<N;k++)
			if(MAX>a[k][MAXj])
			{flag=0;
			continue;}
		if(flag)
		{
			printf("a[%d][%d]=%d\n",i,MAXj,MAX);
			break;
		}
	}
	if(!flag)
		printf("不存在!\n");
	return 0;
}
