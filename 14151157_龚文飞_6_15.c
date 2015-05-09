#include "stdio.h"
#include "string.h"
void main()
{
    int i,j;
    char s1[10],s2[10];
    for(j=0;j<10;j++)
    {
        s2[j]='\0';
    }
    printf("请输入字符串s1：\n");
    gets(s1);
    for(i=0;i<10 && s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    printf("字符串s2为%s\n",s2);
}
