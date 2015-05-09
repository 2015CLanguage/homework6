#include<stdio.h>
void main()
{ char s1[50],s2[50];
  int i;
  printf("input s2:");
  scanf("%s",s2);
  for (i=0;i<=strlen(s2);i++)
     s1[i]=s2[i];
  printf("s1:%s\n",s1)
}
