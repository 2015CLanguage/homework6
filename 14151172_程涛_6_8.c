#include <stdio.h>
void main()
{
	int i,i1,j,t,l,maxj,a[6][6],b[6],fl[6];
	printf("请输入一个二维数组：\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<6;i++)
	{
		maxj=0;
		for(j=0;j<6;j++)
		{
			if(a[i][j]>a[i][maxj])
			maxj=j;
		}
		b[i]=maxj;
	}
	for(i=0;i<6;i++)
	{
		t=b[i];
		fl[i]=1;
		for(i1=0;i1<6;i1++)
		{
			if(a[i][t]>a[i1][t])
				fl[i]=0;
		}
	}
	for(i=0;i<6;i++)
	{
		if(fl[i]==1)
		{
			t=b[i];
			printf("鞍点坐标为第%d行,第%d列，对应的数为%d\n",i+1,b[i]+1,a[i][t]);
			l=0;
			break;
		}
		else
			l=l+1;
	}
	if(l==6)
	printf("鞍点不存在\n");
}
