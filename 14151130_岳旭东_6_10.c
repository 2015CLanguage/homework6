#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,big=0,small=0,num=0,space=0,other=0;
	char a[3][80];
	printf("请输入:\n");
	for(i=0;i<3;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<80 && a[i][j]!=0;j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				big=big+1;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				small=small+1;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				num=num+1;
			else if(a[i][j]==' ')
				space=space+1;
			else
				other=other+1;
		}
	}

	printf("\n大写字母个数为%d",big);
	printf("\n小写字母个数为%d",small);
	printf("\n数字个数为%d",num);
	printf("\n空格个数为%d",space);
	printf("\n其他字符为%d",other);
	return 0;
}
