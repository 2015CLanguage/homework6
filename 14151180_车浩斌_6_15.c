include <stdio.h>
#define MAX 80
void main()
{ 	
         char s1[MAX],s2[MAX];
         int i=0,j;
         printf ("请输入一串字符:");
         scanf("%s",s1);
         while(s1[i]!='\0')
         {
                  s2[i]=s1[i];
                  i++;
         }
         for(j=0;j<=i;j++)
                  printf("%c",s2[j]);
         printf("\n");
