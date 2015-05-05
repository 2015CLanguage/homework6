#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40];
    printf("please input s2:");
    gets(s2);
    int i;
    for(i=0;i<=strlen(s2);i++)
    {
        s1[i]=s2[i];
    }
    printf("s1:%s\n",s1);
    return 0;
}
