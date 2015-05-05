#include <stdio.h> 
int main()
{
char str1[10],str2[10];
int i;
	gets(str1);
    for(i=0;i<=9;i++){
    	str2[i]=str1[i];
	}
	puts(str2);
return 0;
} 
