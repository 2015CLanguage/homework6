#include<stdio.h>
int main()
{
int i,j,da,xiao,num,spa,other;
char a[3][80];
da=xiao=num=spa=other=0;
for(i=0;i<3;i++)
{
printf("请输入第%d行:\n",i+1);
gets(a[i]);
for(j=0;j<80&&a[i][j]!='\0';j++)
{
	if(a[i][j]>='A'&&a[i][j]<='Z')
		da=da+1;
	else if(a[i][j]>='a'&&a[i][j]<='z')
		xiao=xiao+1;
	else if(a[i][j]>='0'&&a[i][j]<='9')
		num=num+1;
	else if(a[i][j]==' ')
		spa=spa+1;
	else
		other=other+1;	
}
printf("\n");
}
printf("大写字母：%d个\n小写字母：%d个\n数字：%d\n空格：%d\n其它：%d",da,xiao,num,spa,other);
return 0 ;
}
