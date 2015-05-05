# include <stdio.h>
int main()
{
 int a[10][10]={{1},{1,1}};
 int i,j,m,n;
 for(i=2;i<10;i++)
 {
  a[i][0]=1;
  for(j=1;j<i+1;j++)
  {
   a[i][j]=a[i-1][j-1]+a[i-1][j];
  }
 }
 for(m=0;m<10;m++)
 {
  for(n=0;n<=m;n++)
      printf("%4d",a[m][n]);
  printf("\n");
 }
 return 0;
}
