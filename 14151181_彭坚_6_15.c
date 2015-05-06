#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50], s2[50];
	int i, m;
	printf("请输入一个小于五十的数组s2=");
	gets_s(s2);
	m = strlen(s2);
	for (i = 0; i <= m; i++)
		s1[i] = s2[i];
	printf("复制数组s2得到的数组s1=");
	for (i = 0; i <= m; i++)
		putchar(s1[i]);
	printf("\n");
	return 0;
}
