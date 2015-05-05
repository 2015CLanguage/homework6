#include<stdio.h>
void main()
{
	char s1[100],s2[100];
	int i;
	printf("Please input a string.\n");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
		s2[i]=s1[i];
	s2[i]=s1[i];
	printf("Character array s2 is \n\t");
	puts(s2);
}
