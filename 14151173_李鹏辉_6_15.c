#include<stdio.h>
void main()
{
	int i,j;
	char s1[100],s2[60];
	puts("please input s1:");
	gets(s1);
	puts("please input s2:");
	gets(s2);	
	for(i=0;i<100;i++)
	{
		if(s1[i]=='\0'){
			for(j=0;j<60;j++)
			{
				s1[i]=s2[j];
				i++;
			}
			break;
		}
		
	}
	puts("the result is:");
	puts("s1:");
	puts(s1);
	puts("s2:");
	puts(s2);
}
