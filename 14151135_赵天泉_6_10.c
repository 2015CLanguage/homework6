#include<stdio.h>
int main()
{
	char a[3][80];
	int i,j,upp,low,num,spa,oth;
	upp=0;
	low=0;
	num=0;
	spa=0;
	oth=0;
	for(i=0;i<3;i++)
	{
		printf("请输入字符,第%d行：\n",i+1);
		gets(a[i]);
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				upp++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				low++;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				num++;
			else if(a[i][j]==' ')
				spa++;
			else
				oth++;
		}
	}
	printf("大写字母的个数为%d\n",upp);
	printf("小写字母的个数为%d\n",low);
	printf("数字的个数为%d\n",num);
	printf("空格的个数为%d\n",spa);
	printf("其他字符的个数为%d\n",oth);
	return 0;
}
