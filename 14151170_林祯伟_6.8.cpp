#include<stdio.h>
#define M 3
#define N 3

int main()
{
    int g,h,i,j,k,ht,kt,a[M][N],max,min;
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
		max=a[g][0];
		for(h=0;h<N;h++)
		{
			if(a[g][h]>max) max=a[g][h];ht=h;
		}
		
		min=1;                //这里把min当成标记变量,标记max是否为鞍点
		for(k=0;k<M;k++)
		{
			if(a[k][ht]<max) {printf(".:第%d行并没有鞍点。\n",g+1);min=0;break;}
		}
		if(min==1){printf(".:第%d行第%d列的%d是鞍点。\n",g+1,ht+1,a[g][ht]);}
	}
	return 0;
}
