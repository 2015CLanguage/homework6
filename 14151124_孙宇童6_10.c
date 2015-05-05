# include<stdio.h>
int main(void)
{
	char str[3][80];

	int i,j;
	int a,b,c,d,e;//a为大写数，b为小写数，c为数字，d为空格,e为其他字符数
		a=b=c=d=e=0;//初始均为零
	printf("请输入文章：");

	
	gets(str[0]);//输入三行字符串
	gets(str[1]);
	gets(str[2]);

	for(i=0;i<3;i++)//逐个审查字符形式并累计
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
