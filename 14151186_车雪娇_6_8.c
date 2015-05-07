#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,k,a[6][6],max,maxj,flag;
   printf("please input matrix:\n") ;
   for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    scanf("%d",&a[i][j]);
   for(i=0;i<6;i++)
   {
       max=a[i][0];
       maxj=0;
       for(j=0;j<6;j++)
        if(a[i][j]>max)
       {
           max=a[i][j];
           maxj=j;
       }
       flag=1;
       for(k=0;k<6;k++)
        if(max>a[k][maxj])
       {
           flag=0;
           continue;
       }
       if(flag)
       {
           printf("a[%d][%d]=%d\n",i,maxj,max);
           break;
       }
   }
   if(!flag)
    printf("It is not exist!\n");
    return 0;
}
