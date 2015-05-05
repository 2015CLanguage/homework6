#include<stdio.h>
int main()
{
	char c[3][80];
	int i,j,L=0,l=0,n=0,s=0,o=0;
	printf("请分别输入三行文字，每行文字不超过80个字符\n");
	gets(c[0]);
	gets(c[1]);
	gets(c[2]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<80 && c[i][j]!='\0';j++)
		{
			if(c[i][j]>=65 && c[i][j]<=90)
			{
				L+=1;
			}
			else if(c[i][j]>=97 && c[i][j]<=122)
			{
				l+=1;
			}
            else if(c[i][j]>=48 && c[i][j]<=57)
			{
				n+=1;
			}
            else if(c[i][j]==' ')
			{
				s+=1;
			}
			else
			{
				o+=1;
			}
		}
	}
	printf("大写字母个数为%d,小写字母个数为%d,数字个数为%d,空格个数为%d,其他字符个数为%d\n",L,l,n,s,o);
	return 0;
}
