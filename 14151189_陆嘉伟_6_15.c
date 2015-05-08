#include<stdio.h>
int main()
{
int i;
char s2[10],s1[10];
printf("输入s2：\n");
gets(s2);
for(i=0;i<10&&s2[i]!='\0';i++)
s1[i]=s2[i];
printf("s1:%s",s1);
return 0;
}
