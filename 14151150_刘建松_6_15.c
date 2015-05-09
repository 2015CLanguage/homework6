#include<stdio.h>
#include <string.h>
#define N 40
int main()
{
	int i;
	char s1[N],s2[N];
	printf("请输入一串长度为%d的字符数组："	,N);
	gets(s2) ;
	for(i=0;i<strlen(s2);i++){
		s1[i]=s2[i];
	}
	printf("s1:%s\n",s1);
	return 0;
}
