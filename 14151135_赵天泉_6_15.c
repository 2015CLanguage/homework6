#include<stdio.h>
#include<string.h>
int main()
{
	char s1[80],s2[80];
	int i;
	printf("请输入字符 s2:");
	gets(s2);
	for(i=0;i<=strlen(s2);i++)
		s1[i]=s2[i];
	printf("s2为:");
	puts(s1);
	return 0;
}
