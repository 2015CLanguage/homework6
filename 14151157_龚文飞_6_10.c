#include"stdio.h"
void main()
{
	int i, j,cap,sma,dig,spa,oth;
	char text[3][80];
	cap = sma = dig = spa = oth = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入第%d行文字:\n", i + 1);
		gets_s(text[i]);
		for (j = 0; j < 80&&text[i][j]!='\0'; j++)
		{  
			if (text[i][j] >= 'A'&&text[i][j] <= 'Z')
				cap = cap + 1;
			else if (text[i][j] >= 'a'&&text[i][j] <=  'z')
				sma = sma + 1;
			else if (text[i][j] >= '0'&&text[i][j] <= '9')
				dig = dig + 1;
			else if (text[i][j] == ' ')
				spa = spa + 1;
			else
				oth = oth + 1;
		}
	}
	printf("大写字母有%d个\n", cap);
	printf("小写字母有%d个\n", sma);
	printf("数字有%d个\n", dig);
	printf("空格有%d个\n", spa);
	printf("其它字符有%d个\n", oth);
}

