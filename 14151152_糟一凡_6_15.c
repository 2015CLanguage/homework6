#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("向s2中输入字符：");
	gets(s2);
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]=s2[i];
	printf("s1中的字符：");
	puts(s1);
	return 0;
}
