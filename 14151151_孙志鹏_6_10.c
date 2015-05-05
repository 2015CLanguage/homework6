#include<stdio.h>
int main()
{int i,j,a,b,c,d,x;
char text[3][80];
i=j=a=b=c=d=x=0;
for(i=0;i<3;i++)
	{printf("请输入第%d行\n",i+1);
	gets(text[i]);
	for(j=0;j<80&&text[i][j]!='/0';j++)
		{if(text[i][j]>='A'&&text[i][j]<='Z')
		a++;
		else if(text[i][j]>='a'&&text[i][j]<='z')
			b++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				c++;
			else if(text[i][j]==' ')
				x++;
			else
				d++;
	}
}
printf("小写字母：%d\n",a);
printf("大写字母：%d\n",b);
printf("空格：%d\n",x);
printf("数字：%d\n",c);
printf("其他字符：%d\n",d);
return 0;
}
