#include<stdio.h>
int cap = 0, low = 0, space = 0, fig = 0, other = 0;
int statistics(a)
{
	if (a == 32)
		space++;
	else if (a > 47 && a < 58)
		fig++;
	else if (a>64 && a < 91)
		cap++;
	else if (a>96 && a < 123)
		low++;
	else
		other++;
	return 0;
}
int main()
{
	int i, j;
	char a[3][80];
	printf("请输入第一行文字：");
	gets(a[0]);
	printf("请输入第二行文字：");
	gets(a[1]);
	printf("请输入第三行文字：");
	gets(a[2]);
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 80; j++)
		{
			if (a[i][j] == 0)
				break;
			statistics(a[i][j]);
		}
	}
	printf("三行文字中有%d个英文大写字母，有%d个小写字母，%d个数字，%d个空格，其他字符个数为%d。", cap, low, fig, space, other);
	return 0;
}
