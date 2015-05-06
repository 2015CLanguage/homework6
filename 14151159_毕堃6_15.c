
#include <stdio.h>
#include <string.h>
int main()
{
char str1[80],str2[80];
int i;
printf("请输入一个字符串：\n");
scanf("%s",str2);
for(i=0;(i<=strlen(str2));i++){
    str1[i]=str2[i];}
printf("%s\n",str1);
return 0;
}
