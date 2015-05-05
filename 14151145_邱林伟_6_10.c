#include<stdio.h>
void main()
{
	char a[3][80];
	int i,j,d=0,x=0,s=0,k=0,q=0;
	for(i=0;i<3;i++)
	{printf("请输入第%d行文字:\n",i+1);
	gets(a[i]);}
    for(i=0;i<3;i++)
	{
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{if(a[i][j]>='A'&&a[i][j]<='Z')
		d=d+1;//计算大写字母个数
		else if(a[i][j]>='a'&&a[i][j]<='z')
		x=x+1;//计算小写字母个数
		else if(a[i][j]>='0'&&a[i][j]<='9')
		s=s+1;//计算数字个数
		else if(a[i][j]=' ')
		k=k+1;//计算空格个数
		else q=q+1;//计算其他字符
		}
	}
	printf("大写字母有%d个\n",d);
	printf("小写字母有%d个\n",x);
	printf("数字有%d个\n",s);
	printf("空格有%d个\n",k);
	printf("其他字符有%d个\n",q);
}
