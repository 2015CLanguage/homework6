#include <stdio.h>
void main()
{
int i,j,max[5],min[5];
int f[5][5];
printf("请随机输入25个整数来组成数组\n");
for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		scanf("%d",&f[i][j]);
	}	
for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
		if(f[i][j]>f[i][j+1])
			f[i][j+1]=f[i][j];		
		}
	for(j=0;j<5;j++)
		{
		if(f[j][i]<f[j+1][i])
			f[j+1][i]=f[j][i];
		}
	if(f[i][4]==f[4][i])
		{printf("鞍数是:%d\n",f[4][i]);
		break;}
	}
}
