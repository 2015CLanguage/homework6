#include<stdio.h>
int main()
{
	int i,j,big=0,sma=0,num=0,sp=0,o=0;
	char t[3][80];
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行文字\n",i+1);
		gets(t[i]);  //输入每一行文字
		for(j=0;j<80&&t[i][j]!='\0';j++)  //将数组的每个元素拆分
		{
			if('A'<=t[i][j]&&t[i][j]<='Z')  //统计大写字母个数
				big=big+1;
			else if('a'<=t[i][j]&&t[i][j]<='z')  //统计小写字母个数
				sma=sma+1;
			else if('0'<=t[i][j]&&t[i][j]<='9')  //统计数字个数
				num=num+1;
			else if(t[i][j]==' ')  //统计空格个数
				sp=sp+1;
			else  //统计其他符号的个数
				o=o+1;
		}
	}
	printf("\n大写字母个数：%d\n小写字母个数：%d\n 数字个数 ：%d\n 空格个数 ：%d\n其他字符个数：%d\n",big,sma,num,sp,o);
	return 0;
}
