#include<stdio.h>
int main()
{
	int i,j,upp,low,dig,spa,oth;//定义初始值
	char t[3][80];
	upp=low=dig=spa=oth=0;

	for(i=0;i<3;i++)
	{
		printf("请输入第%d行:\n",i+1);//分行获取输入
		gets(t[i]);
		for(j=0;j<80&&t[i][j]!='\0';j++)//分行检索条件字符
		{
			if(t[i][j]>='A'&&t[i][j]<='Z')
				upp++;
			else if(t[i][j]>='a'&&t[i][j]<='z')
				low++;
			else if(t[i][j]>='0'&&t[i][j]<='9')
				dig++;
			else if(t[i][j]=='\0')
				spa++;
			else
				oth++;
		}

	}

	printf("\n大写字母的个数：%d\n",upp);//输出计数
	printf("小写字母的个数：%d\n",low);
	printf("文中数字的个数：%d\n",dig);
	printf("文中空格的个数：%d\n",spa);
	printf("其他字符的个数：%d\n",oth);

return 0;
}
