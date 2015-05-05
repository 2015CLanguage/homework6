#include<stdio.h>
#define N1 3
#define N2 3
int main()
{
	int i,j,a[N1][N2],maxr[N1],loca,an,row,r,c,f=0,flag=0;
	printf("请输入二维数组\n");
	for(i=0;i<N1;i++)
	{
		maxr[i]=0;
		an=r=c=0;
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
			an=maxr[i];
			r=i+1;
			c=loca+1;
			f=0;
			flag=1;
			break;
		}
	}
	if(!flag)
		printf("没有鞍点\n");
	else
	{
		printf("有鞍点\n");
		printf("鞍点值为%d, 坐标为:第%d行,第%d列\n",an,r,c);
	}
    return 0;
}
