#include<stdio.h>
void main()
{
	printf("请输入一个二维数组:\n");
	int a[4][5],i,j,m[5],r=0,f;//输入四行五列的二维数组
	for(i=0;i<4;i++)
	{for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);}
    for(i=0;i<4;i++)
	{
		m[i]=a[i][0];
	    for(j=0;j<5;j++)
		{if(a[i][j]>m[i])
	      m[i]=a[i][j];
	      r=j;}
	}
	for(i=0;i<4;i++)
	{
		if(m[i]<a[i][r])
		f=1;
	    else 
		f=0;
	}
	if(f=1)
        printf("鞍点为:a[%d][%d]=%d\n",i,r,m[i]);
	if(f=0)
		printf("鞍点不存在");
}
