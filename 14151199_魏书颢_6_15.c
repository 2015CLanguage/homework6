#include"stdio.h"
#include"string.h"
void main()
{
	char s2[50],s1[50];
	int i;
	printf("请输入需要复制的小于50的字符\n");

	scanf("%s",s2);
	for(i=0;i<=strlen(s2);i++)
	{	
	   s1[i]=s2[i];
		    
	}
	printf("复制得：%s\n",s1);
}

