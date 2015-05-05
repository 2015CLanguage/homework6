#include<stdio.h>
#include<string.h>
void main()
{    char str[3][80];
	 int a=0,b=0,c=0,d=0,e=0,i,j;
     for(i=0;i<3;i++)
         gets(str[i]);
	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<80;j++)
		 {if(str[i][j]<='Z'&&str[i][j]>='A')a++;
		  if(str[i][j]<='z'&&str[i][j]>='a')b++;
		  if(str[i][j]<='9'&&str[i][j]>='0')c++;
		  if(str[i][j]==' ')d++;
		  else e++;
		 }
	 }
	 printf("%5d%5d%5d%5d%5d",a,b,c,d,e);
}
