#include<stdio.h>
#include<string.h>
void main()
{
	char s2[10],s1[10];
	int i;
	gets(s2);
	for(i=0;i<10;i++)
	{
		if(s2[i]=='\0')
		{
			s1[i]='\0';
			break;
    }
		else s1[i]=s2[i];
	}
	puts(s1);
}
