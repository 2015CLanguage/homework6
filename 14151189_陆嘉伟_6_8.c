#include<stdio.h>
int main()
{
int a[2][3],i,j,max,k,t,flag;
printf("请输入数组：\n");
for(i=0;i<2;i++)
	for(j=0;j<3;j++)
		scanf("%5d",&a[i][j]);
for(i=0;i<2;i++)
{
max=a[i][0];
for(j=0;j<3;j++)
if(a[i][j]>max)
{
	k=j;
	max=a[i][k];
}
for(t=0;t<2;t++)
	if(a[i][k]>a[t][k])
		flag=0;
if(flag!=0)
	printf("鞍点为a[%d][%d]=%d\n",i,k,max);
	break;
}
if(flag==0)
printf("无鞍点");
return 0;
}
