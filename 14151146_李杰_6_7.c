#include<stdio.h>
int main()
{
	int a[15][15]={{0},{0},{0}},i,j,k,n,p,q;
	while(1)
	{
		printf("enter n(n=1~15):");
		scanf("%d",&n);
		if((n!=0)&&(n<15)&&(n%2!=0)) break;
	}
	j=n/2;
	a[0][j]=1;
	for(k=2;k<=n*n;k++)
	{
		p=i;q=j;//储存上一个数的位置
		i=i-1;j=j+1;
		//以下两行是限定位置
		if(i<0) i=n-1;
		if(j>n-1) j=0;
		if(a[i][j]==0)
			a[i][j]=k;
		else
		{
			a[p+1][q]=k;
			i=p+1;
			j=q;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}
