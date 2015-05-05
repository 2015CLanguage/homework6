#include<stdio.h>
void main()
{
	char a1[100],a2[100];
	int i;
	printf("请输入一个字符串:\n");
	scanf("%s",a2);
	for(i=0;a2[i]!='\0';i++)
		a1[i]=a2[i];
	printf("a1:%s\n",a2);
}
