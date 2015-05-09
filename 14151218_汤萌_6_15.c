#include<stdio.h>
int main()
{
	int i;
	printf("请输入：");
	char s2[80] = { "" }, s1[80] = {""};
	scanf("%s", s2);
	for (i = 0; i < 80; i++)
	{
		if (s2[i] != 0)
			s1[i] = s2[i];
		else
			break;
	}
	printf("\n共复制了%d个字符。", i);
	printf("\ns1=%s\ns2=%s", s1, s2);
	return 0;
}
