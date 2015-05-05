# homework6
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s1[100],s2[100];
    int i;
    printf("please input s2 !");
    scanf("%s",s2);
    for(i=0;i<=100;i++)
    {
        if(s2[i]=='\0'){
            s1[i]=s2[i];
            break;}
        else
            s1[i]=s2[i];
    }
    
    printf("s1:%s\n",s1);
    return 0;
}
