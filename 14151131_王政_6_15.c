#include<stdio.h>
int main()
{
	int i;
	char s1[100],s2[100];
	printf("请输入数组s2:");
	gets(s2);
	for(i=0;i<100;i++)
	{
		if(s2[i]!='\0')
		{
			s1[i]=s2[i];
			s1[i+1]='\0';
		}
		else
			i=100;
	}
	printf("    数组s1为:%s\n",s1);
	return 0;
}
