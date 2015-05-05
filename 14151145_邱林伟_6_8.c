#include<stdio.h>
void main()
{
	int a[100][100],i,j,X,Y,m[100],r[100]={0},f=1;
	printf("请输入数组的行数和列数：");
	scanf("%d %d",&X,&Y);
	printf("请输入一个%d行%d列的二维数组：\n",X,Y);
	for(i=0;i<X;i++)
	{for(j=0;j<Y;j++)
	scanf("%d",&a[i][j]);}//输入二维数组
    for(i=0;i<X;i++)
	{
		m[i]=a[i][0];
	    for(j=0;j<Y;j++)
		{if(a[i][j]>m[i])
	      m[i]=a[i][j];//求出一行中最大值
	      r[i]=j;}
	}
	for(i=0;i<X;i++)
	{
		for(j=0;j<X;j++)
	   {if(m[i]>a[j][r[i]])//看它是不是这一列的最小值
		f=0;}
		 if(f==1)
          {printf("鞍点为:a[%d][%d]=%d\n",i,r[i],m[i]);s=s+1;}
           f=1;
	}
    if(f==0)
    printf("鞍点不存在\n");
}
