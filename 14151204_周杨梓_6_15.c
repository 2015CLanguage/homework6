#include<stdio.h>
int main()
{
	char s1[100],s2[100],i;
	printf("请输入一行字符:");
	gets(s2);
	printf("您输入的数组s2为:%s\n",s2);
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i+1]='\0';
	printf("复制之后的字符数组s1为:%s\n",s1);
	return 0;
}
