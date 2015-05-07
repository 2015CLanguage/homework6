#include<stdio.h>
int main()
{
	char str[3][80];
	int i,j,k,a=0,b=0,c=0,d=0,e=0;
    for(i=0;i<3;i++)
	{
		gets(str[i]);
	}
	for(j=0;j<3;j++)
	{
        for(k=0;k<80;k++)
		{
		    if(str[j][k]>64&&str[j][k]<91)a++;
            else if(str[j][k]>96&&str[j][k]<123)b++;
			else if(str[j][k]>47&&str[j][k]<58)c++;
			else if(str[j][k]==32)d++;
			else
			{
				e++;
			}
		}
	}
	printf("大写字母数为%d\n小写字母数为%d\n数字数为%d\n空格数为%d\n其他字符数为%d\n",a,b,c,d,e);
	return 0;
}
