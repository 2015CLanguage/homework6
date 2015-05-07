#include <stdio.h>
int main()
{
	char str[3][80];
	int i,j;
	int a,b,c,d,e;
	a=b=c=d=e=0;
	printf("请输入文章：");
	gets(str[0]);
	gets(str[1]);
	gets(str[3]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			if(str[i][j]>='A' &&str[i][j]<='Z')
				a++;
			else if(str[i][j]>='a' &&str[i][j]<='z')
				b++;
			else if(str[i][j]>='0' &&str[i][j]<='9')
				c++;
			else if(str[i][j]=' ')
				d++;
			else
				e++;
		}
	}
	printf("大写字母数为%d\n小写字母数为%d\n数字数为%d\n空格数为%d\n其他字符数为%d\n",a,b,c,d,e);
	return 0;
}
