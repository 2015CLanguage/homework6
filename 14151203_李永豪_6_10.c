# homework6
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char Ar[3][80];
    int i,j,p=0,q=0,r=0,o=0,t=o;
    for(i=0;i<3;i++)
    {
        printf("please input line %d\n",i);
        gets(Ar[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<80&&Ar[i][j]!='\0';j++)
        {
            if('0'<=Ar[i][j]&&Ar[i][j]<='9')
                p=p+1;
            else if('A'<=Ar[i][j]&&Ar[i][j]<='Z')
                q=q+1;
            else if('a'<=Ar[i][j]&&Ar[i][j]<='z')
                r=r+1;
            else if(Ar[i][j]==' ')
                t=t+1;
            else
                o=o+1;
            
        }
    }
    printf("nupper case:%d\n",q);
    printf("lower case:%d\n",r);
    printf("number:%d\n",p);
    printf("space:%d\n",t);
    printf("other:%d\n",o);
    return 0;
}
