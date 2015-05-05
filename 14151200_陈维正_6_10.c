#include <stdio.h>
void main()
{
char string[3][3];
char c;
int i,j,letter=0,num=0;

for(i=0;i<3;i++)
	gets(string[i]);

for(i=0;i<3;i++)
	{
	for(j=0;(c=string[i][j])!='\0';j++)
		{if(c<=90&&c>=65)
			num++;
		}
	}
printf("大写字母有:%d\n",num);
}
