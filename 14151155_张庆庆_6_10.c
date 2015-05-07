#include<stdio.h>
int main()
{	
	char a[3][80];
	int i,j,num1=0,num2=0,num3,num4,num5;
	num1=num2=num3=num4=num5=0;
	for(i=0;i<3;i++)
	{printf("请输入每行的字符：%d\n",i+1);
	  gets(a[i]);
	  for(j=0;j<80&&a[i][j]!='\0';j++)
	  {if(a[i][j]==' ')
		  num1++;
	   else if(a[i][j]<='z'&&a[i][j]>='a')
		   num2++;
       else if(a[i][j]<='Z'&&a[i][j]>='A')
		   num3++;
        else if(a[i][j]<='9'&&a[i][j]>='0')
		   num4++;
		else
	    num5++;}
	}
	printf("空格数：%2d\n",num1);
	printf("小写字母数：%d\n",num2);
	printf("大写字母数：%d\n",num3);
	printf("数字数%2d\n",num4);
	printf("其他字符数：%d\n",num5);
	return 0;
}
