#include<stdio.h>
int main()
{
    int i,j;
	int a=0,b=0,c=0,d=0,e=0;
	char text[3][80];
	for(i=0;i<3;i++)
	{
		printf("请输入文章：\n");
	    gets(text[i]);
		for(j=0;j<80;j++)
		{
			if(text[i][j]>='A' &&text[i][j]<='Z')
				a++;
			else if(text[i][j]>='a' &&text[i][j]<='z')
				b++;
			else if(text[i][j]>='0' &&text[i][j]<='9')
				c++;
			else if(text[i][j]=' ')
				d++;
			else
				e++;
		}
	}
	printf("\n大写字母个数为%d",a);
	printf("\n小写字母个数为%d",b);
	printf("\n数字个数为%d",c);
	printf("\n空格个数为%d",d);
	printf("\n其他字符为%d\n",e);
	return 0;
}
