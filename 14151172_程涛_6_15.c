#include<stdio.h>
#include<string.h>
void main()
{
	char s2[9],s1[9];
	int i;
	gets(s2);
	for(i=0;i<9;i++)
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
