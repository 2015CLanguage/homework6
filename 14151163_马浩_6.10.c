#include<stdio.h>
void main()
{
	char a[3][80];
	int big = 0, small = 0, num = 0, space = 0, other = 0, i, j;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入第%d行的文字：\n", i);
		gets(a[i]);
	}
	for (i = 1; i <= 3; i++)
	for (j = 1; j <= 80 && a[i][j] != '\0'; j++)
	{
		if (a[i][j] >= 'A'&&a[i][j] <= 'Z')
			big++;
		else if (a[i][j] >= 'a'&&a[i][j] <= 'z')
			small++;
		else if (a[i][j] >='0'&& a[i][j] <= '9')
			num++;
		else if (a[i][j] == ' ')
			space++;
		else
			other++;
	}
	printf("大写字母的个数为：%d\n", big);
	printf("小写字母的个数为：%d\n", small);
	printf("数字的个数为：%d\n", num);
	printf("空格的个数为：%d\n", space);
	printf("其他字符的个数为：%d\n", other);
          return 0；
}
