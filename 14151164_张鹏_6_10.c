#include <stdio.h>
int main()
{
	int i,j,b=0,c=0,d=0,e=0,f=0;
	char  a[3][80];
	for(i=0;i<3;i++)
	{
		printf("输入第%d行\n",i+1);
		gets(a[i]);
		for(j=0;(j<80)&&(a[i][j]!='\0');j++)
		{
			if((a[i][j]>='z')&&(a[i][j]<='Z'))
				b++;
			else if((a[i][j]>='a')&&(a[i][j]<='z'))
				c++;
			else if((a[i][j]>='0')&&(a[i][j]<='9'))
				d++;
			else if(a[i][j]==' ')
				e++;
			else
				f++;
		}
	}
	printf("英文大写字母%d个\n",b);
	printf("有英文小写字母%d个\n",c);
	printf("有数字%d个\n",d);
	printf("有空格%d个\n",e);
	printf("其中有其他字符%d个\n",f);
	return 0;
}
