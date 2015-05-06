#include <stdio.h>
#include <string.h>
main()
{
  char a[100],b[100],c[100];
  int l1,l2,l3,d=0,x=0,s=0,k=0,q=0,i;
  printf("please input first line\n");
  gets(a);
  printf("please input second line\n");
  gets(b);
  printf("please input third line\n");
  gets(c);
  l1=strlen(a);
  l2=strlen(b);
  l3=strlen(c);
  for(i=0;i<l1;i++)
  {   if(a[i]>='a'&&a[i]<='z') x++;
   if(a[i]>='A'&&a[i]<='Z') d++;
      if(a[i]>='0'&&a[i]<='9') s++;
      if(a[i]==' ') k++;
 }
   for(i=0;i<l2;i++)
  {   if(b[i]>='a'&&b[i]<='z') x++;
   if(b[i]>='A'&&b[i]<='Z') d++;
      if(b[i]>='0'&&b[i]<='9') s++;
      if(b[i]==' ') k++;
   }
    for(i=0;i<l3;i++)
  {   if(c[i]>='a'&&c[i]<='z') x++;
   if(c[i]>='A'&&c[i]<='Z') d++;
      if(c[i]>='0'&&c[i]<='9') s++;
      if(c[i]==' ') k++;
 }
 q=l1+l2+l3-x-d-s-k;
   printf("有大写字母%d个，小写字母%d个，数字%d个，空格%d个，其他字符%d个\n",d,x,s,k,q);
}
