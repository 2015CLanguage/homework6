#include<stdio.h>
void main()
{
	printf("请输入一个二维数组:\n");
	int a[4][5],i,j,m[5],r[5]={0},f=1;
	for(i=0;i<4;i++)
	{for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);}//以输入四行五列的二维数组为例
    for(i=0;i<4;i++)
	{
		m[i]=a[i][0];
	    for(j=0;j<5;j++)
		{if(a[i][j]>m[i])
	      m[i]=a[i][j];//求出一行中最大值
	      r[i]=j;}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{if(m[i]>a[j][r[i]])//看它是不是这一列的最小值
		f=0;}
		if(f==0) continue;
	    if(f==1)
          printf("鞍点为:a[%d][%d]=%d\n",i,r[i],m[i]);
	}
    if(f==0)
    printf("鞍点不存在\n");
}
