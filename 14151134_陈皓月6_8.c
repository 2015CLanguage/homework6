#include<stdio.h>
void main()
{
	int a[5][5],i,j,m,x,y,k;
	printf("请输入25个数字");
	for(i=0;i<5;i++)  //输入25个元素
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)  //遍历所有元素
	{
		m=a[i][0];
		for(j=0;j<5;j++)  //找出某一行最大值
		{
			if (a[i][j]>m)
			{
				m=a[i][j];
				x=i;
				y=j;
			}
		}
		for(k=0;k<5;k++)  //判断其是否为本列最小
		{
			if(a[k][y]<m)
			{
				printf("第%d行不存在鞍点\n",x+1);//输出判断结果
				break;
			}
			if(k==4)  //输出判断结果
				printf("第%d行，第%d列元素%d为鞍点\n",x+1,y,m);
		}
	}
}
