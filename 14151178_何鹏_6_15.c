#include "stdio.h"
void main()
{
	int i;
	char s1[100], s2[100];
	gets(s2);
	for (i = 0; s2[i] != '\0'; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	puts(s1);
}
