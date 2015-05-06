#include<stdio.h>
int main()
{
	int i, j, nupper, lower, digit, space, other ;     //根据ASCII码表
	char str[3][80];
	nupper = lower = digit = space = other = 0;
		printf("请输入字符(每行不超过八十个)：\n");
	for (i = 0; i < 3; i++)
	{	

		printf("第%d行：", i+1);
		gets_s (str[i]);
		for (j = 0; j < 80; j++)
		{
			if (str[i][j] >= 'A'&&str[i][j] <= 'Z')
				nupper++;
			else if (str[i][j] >= 'a'&&str[i][j] <= 'z')
				lower++;
			else if (str[i][j] >= '0'&&str[i][j] <= '9')
				digit++;
			else if (str[i][j] == ' ')
				space++;
			else
				other++;
		}
	}
	printf("英文大大写字母个数为：%d\n英文大大写字母个数为：%d\n数字个数为：%d\n空格个数为：%d\n其他字符个数为：%d\n", nupper, lower, digit, space, other);
	return 0;
}
