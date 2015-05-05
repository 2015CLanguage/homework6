#include<stdio.h>
#include<string.h>
void main()
{    char s1[20]={0};
     char s2[20]={0};
	 int i;
	 gets(s2);
	 for(i=0;i<20;i++)
	 {   if(s2[i]=='\0'){s1[i]='\0';break;}
		 else s1[i]=s2[i];	
	 }
	 for(i=0;i<20;i++)
		 printf("%c",s1[i]);
}
