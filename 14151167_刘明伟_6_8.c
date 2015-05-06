Enter file contents here
# include <stdio.h>
int main()
{
	int a[4][5];
	int c,d,m,n,max,min,l,t,k;
	printf("请输入一个二维数组：\n");
	for(c=0;c<4;c++)
	{for(d=0;d<5;d++)
	{printf("a[%d][%d] ",c,d);
	scanf("%d",&a[c][d]);}}
		for(m=0;m<4;m++)
		{max=a[m][0];
		l=0;
		for(n=0;n<5;n++)
			if(a[m][n]>max)
			{max=a[m][n];
			l=n;
			}t=1;
			for(k=0;k<5;k++)
				if(max>a[k][l])
				{t=0;
				continue;}
				if(l)
				{printf("a[%d][%d]=%d\n",m,l,max);
				break;
				}
		}
		if(!l)
			printf("没有鞍点");
		return 0;
}
