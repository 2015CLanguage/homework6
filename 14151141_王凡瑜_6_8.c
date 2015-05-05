#include<stdio.h>
#define row 4
#define column 5
void main()
{
	int i,j,r,c,flag1=0,flag2;
	int a[row][column];
	for(i=0;i<row;i++)
	{
		printf("Please input the numbers in Row %d\n",i+1);
		for(j=0;j<column;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<row;i++)
	{
		flag2=1;
		c=0;
		for(j=1;j<column;j++)
		{
			if(a[i][j]>a[i][c])
				c=j;
		}
		r=i;
		for(i=0;i<row;i++)
		{
			if(a[i][c]<a[r][c])
				flag2=0;
		}
		if(flag2)
		{
			flag1=1;
			printf("A Saddle Point was found in\n\tRow %d Column %d\n",r+1,c+1);
		}
	}
	if(!flag1)
		printf("No Saddle Point was found.\n");
}
