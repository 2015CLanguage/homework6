#include<stdio.h>
int main()
{
	int i,j,k,a[4][5],t,c,flag;
	printf("请输入数组：\n");
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<4;i++)
		{t=a[i][0];
		 c=0;
		 for(j=1;j<5;j++)
			{if(t<a[i][j])
			 t=a[i][j];
			 c=j;}
		 flag=1;
		 for(k=0;k<4;k++)
			 if(t>a[k][c])
				{flag=0;
				 continue;}
		 if(flag)
			{printf("a[%d][%d]=%d为鞍点。\n",i,c,t);
			 break;}
		}
	if(flag==0)
		printf("鞍点不存在！\n");
	return 0;
}
