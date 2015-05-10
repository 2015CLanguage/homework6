#include <stdio.h> 
#include <string.h> 
int main() 
{ 
char s1[80],s2[80]; 
int i; 
printf("请输入一串字符:\n"); 
scanf("%s",s2); 
for(i=0;i<=strlen(s2);i++) 
 s1[i]=s2[i]; 
printf("复制后的字符数组为:\n"); 
printf("%s\n",s1); 
return 0;
} 
