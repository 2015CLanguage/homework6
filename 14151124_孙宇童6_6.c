nclude <stdio.h>

int main(void)
{
	int a[10][10]={0},i,j;//定义一个二维数组

	for (i=0;i<10;i++)
	{	
		a[i][0]= 1;//是该数组第一列的数均为1
		for (j=0;j<10;j++)
		{
			a[i+1][j+1]=a[i][j]+a[i][j+1];//进行计算，每个数都是由其上一行同列的数与上行前一列数相加得来的
			if(a[i][j]!=0)//不输出等于0的元素
			printf("%5d",a[i][j]);
		}
		printf("\n");
	
	}


	return 0;
}
