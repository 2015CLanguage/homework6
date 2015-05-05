#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char s1[25], s2[25];
	printf("输入s2:\n");
	gets_s(s2);
	for (i = 0; i <= strlen(s2); i++)             //复制字符串
	{
		s1[i] = s2[i];
	}
	printf("s1为:%s\n", s1);                     //输出字符串
}
