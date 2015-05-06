#include<stdio.h>
int main()
{
	int a[5][5],i,j,b,c,d,x=0;
	for(i=0;i<5;i++)
    {
		for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	}
	printf("输入的数组为：\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	b=a[0][0];
	for(i=0;i<5;i++)
        {
		for(j=0;j<5;j++)
		{
			if(a[i][j]>b)
                {
				b=a[i][j];
				c=j;
			    }
		}
    for(d=0;d<5;d++)
        {
			if(a[d][c]<b)
			{
				x=x+1;
				break;
			}
		}
		if(x==0)
            {
			printf("a[%d][%d]=%d",i,c,b);
			break;
		    }
	}
	if(x==1)
		printf("无");
	return 0;
}
