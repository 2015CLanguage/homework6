#include<stdio.h>
int main()
{
	int i,j,big,small,num,spa,oth;
	char a[3][80];
	big=small=num=spa=oth=0;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行文字：",i+1);
		gets(a[i]);
		for(j=0;j<80 && a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A' && a[i][j]<='Z')
				big++;
			else if(a[i][j]>='a' && a[i][j]<='z')
				small++;
			else if(a[i][j]>='0' && a[i][j]<='9')
				num++;
			else if(a[i][j]==' ')
				spa++;
			else
				oth++;
		}
	}
	printf("\n");
	printf("大写字母%d个,",big);
	printf("小写字母%d个,",small);
	printf("数字%d个,",num);
	printf("空格%d个,",spa);
	printf("其他字符%d个。\n",oth);
	return 0;
}
