#include<stdio.h>
void main()
{
	int i,j,a,b,c,d,e;
	char s[3][80];
	puts("please input the article line by line:");
	for(i=0;i<3;i++)
		gets(s[i]);
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			if(s[i][j]>='A' && s[i][j]<='Z') a+=1;
			else if (s[i][j]>='a' && s[i][j]<='z') b+=1;
			else if(s[i][j]>='0' && s[i][j]<='9')  c+=1;
			else if(s[i][j]==' ') d+=1;
			else e+=1;		
		}
	}
	printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
}
