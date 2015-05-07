#include<stdio.h>
int main()
{
	int i,j,k,a[4][3],max,maxc,A;  //max是行里最大的数，maxc是最大数的列号，A是鞍点
	printf("请输入4行3列数组：\n");
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);  //输入
    for(i=0;i<4;i++)
	{max=a[i][0];
	 maxc=0;
	 for(j=0;j<3;j++)
		 if(a[i][j]>max)
		 {max=a[i][j];
		  maxc=j;}
     A=1;
	 for(k=0;k<4;k++)
		 if(max>a[k][maxc])
		 {A=0;
		 continue;}
     if(A==1)
	 {printf("鞍点在第%d行第%d列，为%d\n",i+1,maxc+1,max);
	 break;}
	}
	if(A==0)
		printf("鞍点不存在\n");
	return 0;
}
