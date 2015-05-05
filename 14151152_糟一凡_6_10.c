#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][80];
	int i,j,k,upper=0,lower=0,num=0,space=0,rest=0;
	for(i=0;i<3;i++)
	{
		gets(str[i]);
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<80;k++)
		{
			if(str[j][k]=='\0')
			{
				break;
			}
			if(str[j][k]>='A'&&str[j][k]<='Z')
			{
				upper++;
			}
			else if(str[j][k]>='a'&&str[j][k]<='z')
			{
				lower++;
			}
			else if(str[j][k]>='0'&&str[j][k]<='9')
			{
				num++;
			}
			else if(str[j][k]==' ')
			{
				space++;
			}
			else
			{
				rest++;
			}
		}
	}
	printf("大写字母：%d\n",upper);
	printf("小写字母：%d\n",lower);
	printf("数字：%d\n",num);
	printf("空格：%d\n",space);
	printf("其他：%d\n",rest);
	return 0;
}
