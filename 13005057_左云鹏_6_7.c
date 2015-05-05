#include<stdio.h>
int main()
{
	int i,j,n,k,a[15][15];
	int p=1;
	
	while(p==1)//接受阶数输入
	{
		
		printf("请输入阶数n（1-15的奇数）：");
			scanf("%d",&n);
			if((n!=0)&&(n<=15)&&(n%2!=0))
				p=0;
	}
	
	for(i=1;i<=n;i++)//初始化数表
	{
		for(j=1;j<=n;j++)
			a[i][j]=0;
	}
		
		j=n/2+1;//将第一个元素放置在第一行中间
		a[1][j]=1;
		
		for(k=2;k<=n*n;k++)//设置k计数,进行一般操作
		{
			i=i-1;
			j=j+1;
			
			if((i<1)&&(j>n))//对角线右上的情况
			{
				i=i+2;
				j=j-1;
			}
			
			else//行或列的轮换
			{
				if(i<1)i=n;
				if(j>n)j=1;
			}
			
			if(a[i][j]==0)
				a[i][j]=k;
			
			else//位置被占的情况
			{
				i=i+2;
				j=j-1;
				a[i][j]=k;
				
			}
		}

		for(i=1;i<=n;i++)//输出数表
		{
			for(j=1;j<=n;j++)
				printf("%6d",a[i][j]);
			printf("\n");
		}
		return 0;

}
