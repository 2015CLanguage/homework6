#include <stdio.h>
#include <math.h>
#define N 15
int main()
{
	int a[N][N];
	int i,j,k,sign,n;
	sign=1;
	while(sign)//获取一个合法的输入
	{
		printf("请输入一个1到15之间的奇数:\n");
		scanf("%d",&n);
        if((n>=1)&&(n<=15)&&((n%2)!=0))
			sign=0;
		else
			printf("输入不合法\n");
	}
	for(i=0;i<n;i++)//建立一个魔方阵
		for(j=0;j<n;j++)
			a[i][j]=0;
	j=n/2;
	a[0][j]=1;
	for(k=2;k<=pow(n,2);k++)
	{
		i=i-1;
		j=j+1;
		if((i<0)&&(j>=n))
		{
			i=i+2;
			j=j-1;
		}
		
	    else
		{
			if(i<0)   i=n-1;
			if(j>=n)   j=0;
		}
		if(a[i][j]==0)
			a[i][j]=k;
		else
		{
			i=i+2;
			j=j-1;
            a[i][j]=k;
		}

	
	}
	for(i=0;i<n;i++)//输出魔方阵
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0; 
	
}
