# include <stdio.h>
# include <string.h>
int main()
{
	int i;
	char str1[80];
	char str2[80];
	printf("输入字符串1:");
	gets(str1);
	for(i=0;i<80;i++)
	{
		if(str1[i]!='\0')
			str2[i]=str1[i];
		else
		{
			str2[i]='\0'; 
		    break;
		}
	}
	printf("复制后的字符串为:%s\n",str2);
	return 0;
}
