#include<stdio.h>
int main()
{
	int i,j,da,xiao,shu,kong,el;
	char a[3][80];
	da=xiao=shu=kong=el=0;
	for(i=0;i<3;i++)
		{printf("请输入第%d行文字：\n",i+1);
		 gets(a[i]);
		 for(j=0;j<80&&a[i][j]!='\0';j++)
			{if(a[i][j]>='A'&&a[i][j]<='Z')
				 da++;
			 else if(a[i][j]>='a'&&a[i][j]<='z')
				 xiao++;
			 else if(a[i][j]>='0'&&a[i][j]<='9')
				 shu++;
			 else if(a[i][j]==' ')
				 kong++;
			 else
				 el++;
			}
		}
	printf("大写字母有%d个\n",da);
	printf("小写字母有%d个\n",xiao);
	printf("数字有%d个\n",shu);
	printf("空格有%d个\n",kong);
	printf("其他字符有%d个\n",el);
	return 0;
}
