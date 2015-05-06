#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a[4][4]={{1,12,44,67},{32,14,87,99},{25,21,9,55},{56,67,78,89}};
 int i,number=0,sign,j,m,n;
 printf("数组是:\n");
 for (i = 0;i <=3;i++)
 {
  for (j = 0; j<= 3;j++)
   printf("%5d",a[i][j]);
  printf("\n");
 }
 printf("\n");
 for (i = 0; i <= 3; i++)
 {
  m = i;
  n = 0;
  sign = 1;
  for(j = 0; j <= 3;j++)
   {
   if (a[m][n] < a[i][j])
    {n = j;}
   }
  for(j = 0; j <= 3;j++)
   {
   if(a[m][n] >a[j][n])
    sign = 0;
   }
  if (sign == 1)
   {printf("鞍点是 %d\n",a[m][n]);number++;}
 }
 if (number == 0)
  printf("没有鞍点\n");
system("pause");
return 0;
}
