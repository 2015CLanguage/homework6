#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,j,p,q,m;
    printf("please input odd number n(1<=n<=15).\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    i=0;
    j=n/2;
    a[i][j]=1;
    
    for(m=2;m<=n*n;m++)
    {
        p=i;
        q=j;
        i=i-1;
        j=j+1;
        if(i==-1)
            i=n-1;
        if(j==n)
            j=0;
        if(a[i][j]==0)
            a[i][j]=m;
        else
        {
            i=p+1;
            j=q;
            a[i][j]=m;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
