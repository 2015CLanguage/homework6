#include<stdio.h>
int main()
{
	int i,j,k,max,maxj,flag,M=3,N=3;
	int a[M][N];
	printf("输入数组：\n");
	for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
	    scanf("%d ",&a[i][j]);
	for(i=0;i<M;i++)
	{ 
	    max=a[i][0];
		maxj=0;
	    for(j=0;j<N;j++)
	    if(a[i][j]>max)
	    {
	    	max=a[i][j];
	        maxj=j;
		}
		flag=1;
		for(k=0;k<M;k++)
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
	    printf("鞍点不存在\n");
    return 0;
}  
