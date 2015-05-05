#include<stdio.h>
int main()
{
	int i,j,cl=0,ll=0,d=0,s=0,other=0;
	char a[3][80];
	for(i=0;i<3;i++)
	{
		printf("请输入文章的第%d行文字:",i+1);
		gets(a[i]);
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				cl=cl+1;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				ll=ll+1;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				d=d+1;
			else if(a[i][j]==' ')
				s=s+1;
			else
				other=other+1;
		}
	}
	printf("这篇文章中共有%d个大写英文字母;\n",cl);
	printf("              %d个小写英文字母;\n",ll);
	printf("              %d个数字;\n",d);
	printf("              %d个空格;\n",s);
	printf("              %d个其他字符.\n",other);
	return 0;
}
