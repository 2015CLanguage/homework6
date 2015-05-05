#include<stdio.h>
void main()
{
	int i, j, upp = 0, low = 0, num = 0, spa = 0, oth = 0;
	char a[3][30];
	for (i = 0; i<3; i++)
	{
		printf("输入文章第%d行:\n", i + 1);                  //输入三组字符串
		gets(a[i]);
		for (j = 0; j<80 && a[i][j] != '\0'; j++)
		{
			if (a[i][j] >= 65 && a[i][j] <= 90)                //分类计数
				upp += 1;
			else if (a[i][j] >= 97 && a[i][j] <= 122)
				low += 1;
			else if (a[i][j] >= 48 && a[i][j] <= 57)
				num += 1;
			else if (a[i][j] == ' ')
				spa += 1;
			else
				oth += 1;
		}
	}
	printf("大写字母个数：%d\n", upp);                     //输出结果
	printf("小写字母个数：%d\n", low);
	printf("数字个数：    %d\n", num);
	printf("空格个数：    %d\n", spa);
	printf("其他字符个数：%d\n", oth);
}
