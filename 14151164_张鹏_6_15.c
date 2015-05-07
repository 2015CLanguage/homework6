#include <stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int a;
    printf("s2:");
    gets(s2);
    for(a=0;a<=strlen(s2);a++)
        s1[a]=s2[a];
    puts(s1);
    return 0;
}
