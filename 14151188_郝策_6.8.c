#include"stdio.h"
int main()
{
	int a[5][5],i,j,mi,mj,si,sj,f,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<5;i++)
	{
		mi=a[i][0];
		for(j=0;j<5;j++)
		if(a[i][j]>mi)
		{
			mi=a[i][j];
			mj=j;
		}
		f=1;
		for(k=0;k<5;k++)
			if(mi>a[k][mj])
			{
				f=0;
				continue;
			}
		if(f==1)
			{
				printf("第%d行，第%d列的%d是鞍点\n",(i+1),(mj+1),mi);
				break;
			}
	}
	if(f==0)
		printf("没有鞍点\n");
		
		for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
					printf("%-3d",a[i][j]);
				printf("\n");
			}
			
} 
