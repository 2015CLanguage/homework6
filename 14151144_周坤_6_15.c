# homework6
#include<stdio.h>
#include<string.h>
#define n 100
int main() 
{
	char s1[n],s2[n];
	int i;
	printf("输入字符数组s2:");
	scanf("%s",s2);
	for(i=0;i<=strlen(s2);i++)
		s1[i]=s2[i];
	printf("复制的字符组s1:%s\n",s1);
	return 0;
}
