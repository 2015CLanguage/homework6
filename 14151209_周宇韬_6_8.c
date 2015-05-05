# include <stdio.h>
# define N 5
# define M 5
int main()
{
	int mat[N][M];
	int i,j,n,m,max,loca1,loca2,p,sign;
	printf("请逐个数字输入该矩阵:\n");
	for (i=0;i<N;i++)
	    for (j=0;j<M;j++)
			scanf("%d",&mat[i][j]);
	for (n=0;n<N;n++)
	{
		max=mat[n][0];
		for(m=1;m<M;m++)
		{
			if(mat[n][m]>max)
			{
				loca1=n;
				loca2=m;
				max=mat[n][m];
			}
		}
		sign=1;
		for(p=0;p<N;p++)
		{
			if(mat[p][loca2]<max)
			{
				sign=0;
				break;
			    
			}
			else
				sign=1;
		}
		if(sign==1)
		{
			printf("该矩阵鞍点:%d\n",max);
			break;
		}
	}
	return 0;
}
