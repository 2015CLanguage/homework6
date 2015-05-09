#include<stdio.h>              //xt6-8     矩阵的鞍点 
#define M 3
#define N 3

int main()
{
    int i,j,g,h,ht,k,a[M][N],max,min;
	printf("输入%d个数:\n",M*N);
	for(i=0;i<M;i++)
	{for(j=0;j<N;j++) scanf("%d",&a[i][j]);}
	
	printf("输出矩阵如下：\n");
	for(i=0;i<M;i++)
	{
	    for(j=0;j<N;j++) {printf("%5d",a[i][j]);}
		printf("\n");
	}
	printf("查找鞍点：\n");
	
	
	for(g=0;g<M;g++)                          //g，k为行，h为列，ht标记行内最大值所在的h列 
	{
		max=a[g][0];ht=0;                     //此处初始化ht！！！ 
		for(h=0;h<N;h++)
		{
			if(a[g][h]>max) {max=a[g][h];ht=h;}
		}
		//printf("max=%d.\n",max);
		//printf("a[]=%d.\n",a[g][ht]);
		//////
		min=1;                //这里min当成标记变量,以检测后续是否输出语句 
		for(k=0;k<M;k++)
		{
			if(a[k][ht]<max)
			{
				if(min==1) {printf(".:第%d行并无鞍点。\n",g+1);}
				min=0;
			}
		}
		if(min==1){printf(".:第%d行第%d列的%d是鞍点。\n",g+1,ht+1,max);}
		//////
	}
	return 0;
}

	
