#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int i;
	printf("请输入s2\n");  
	scanf("%s",s2);  //输入s2
	for(i=0;i<=strlen(s2);i++)
		s1[i]=s2[i];  //将s2中各数字分别复制给s1
	printf("s1为%s\n",s1);  //输出s1
}
