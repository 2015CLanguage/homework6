#include<stdio.h>
#include<string.h>
int main()
{
	char string[80], s[80];
	int i;
	printf("输入一串字符：");
	gets_s(s);
	for (i = 0; i <= strlen(s); i++)
		string[i] = s[i];
	printf("输入的字符为：%s\n", s);
	return 0;
}
