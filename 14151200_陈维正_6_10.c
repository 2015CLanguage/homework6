#include <stdio.h>
void main()
{
char string[3][80];
char c;
int i,j,a=0,b=0,d=0,e=0,f=0;

for(i=0;i<3;i++)
	gets(string[i]);

for(i=0;i<3;i++)
	{
	for(j=0;j<3&&(c=string[i][j])!='\0';j++)
		{if(c<=90&&c>=65)
			a++;
		else if(c<='z'&&c>='a')
			b++;
		else if(c<='9'&&c>='0')
			d++;
		else if(c==' ')
			e++;
		else
			f++;
		}
	}

printf("大写字母有:%d\n",a);
printf("小写字母有:%d\n",b);
printf("数字有:%d\n",d);
printf("空格有:%d\n",e);
printf("其他字符有:%d\n",f);
}
