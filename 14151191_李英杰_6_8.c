#include<stdio.h>
#define N1 3
#define N2 3
int main()
{
	int i,j,a[N1][N2],maxr[N1],loca,an[10],n=0,row,r[10],c[10],t,f=0;
	printf("请输入二维数组\n");
	for(i=0;i<N1;i++)
	{
		maxr[i]=0;
		an[i]=r[i]=c[i]=0;
		for(j=0;j<N2;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
	for(i=0;i<N1;i++)
	{
		for(j=0;j<(N2-1);j++)
		{
            if(a[i][j]>a[i][j+1])
			{
				maxr[i]=a[i][j];
				loca=j;
			}
			else
			{
				maxr[i]=a[i][j+1];
				loca=j+1;
			}
		}
		for(row=0;row<N1;row++)
		{
            if(a[row][loca]<maxr[i])
			{
				f=0;
				break;
			}
			else
				f++;
		}
		if(f==N1)
		{
            n++;
			an[n]=maxr[i];
			r[n]=i+1;
			c[n]=loca+1;
			f=0;
		}
	}
	if(n==0)
		printf("没有鞍点\n");
	else
	{
		printf("有%d个鞍点,分别为\n",n);
	    for(t=1;t<=n;t++)
		{
			printf("鞍点值为%d, 坐标为:第%d行,第%d列)\n",an[t],r[t],c[t]);
		}
	}
    return 0;
}
