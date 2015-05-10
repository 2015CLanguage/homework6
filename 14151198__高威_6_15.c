#include <stdio.h>
#include <string.h>
char st1[225],st2[225];
int main()
{
	int i,j;
	gets(st1);
	int l=strlen(st1);
	for (i=0; i<l; i++)
	 if (st1[i]=='\0')  break;
	   else st2[i]=st1[i];
	printf("%s",st1);
	   return 0;
}
