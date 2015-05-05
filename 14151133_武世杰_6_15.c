#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100], s2[100];
	int i;
	printf("请输入s2数组中的全部字符（不超过50）：");
	gets(s2);
	for (i = 0; i <= strlen(s2); i++)
		s1[i] = s2[i];
	printf("复制后的s1内容为：%s\n", s1);
	return 0;
}
