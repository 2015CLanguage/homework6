#include "stdio.h"
void main()
{
    int s[10][10],i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            s[i][j]=0;
        }
    }
    s[0][0]=1;
    for(i=1;i<10;i++)
    {
        s[i][0]=1;
        s[i][i]=1;
        for(j=1;j<10;j++)
        {
            s[i][j]=s[i-1][j-1]+s[i-1][j];
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(s[i][j]!=0)
            {
                printf("%5d",s[i][j]);
            }
        }
        printf("\n");
    }
}
