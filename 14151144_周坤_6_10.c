# homework6
#include<stdio.h>
int main()
{
	int i,j,d,x,m,s,k,q;
	char text[3][80];
	d=x=m=s=k=q=0;
	for(i=0;i<3;i++)
	{
		printf("请输入该行文本(第%d行)\n",i+1);
		gets(text[i]);
		for(j=0;j<80&&text[i][j]!='\0';j++)
		{
			if(text[i][j]>='A'&&text[i][j]<='Z')
				d=d+1;
			else if(text[i][j]>='a'&&text[i][j]<='z')
				x=x+1;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				s=s+1;
			else if(text[i][j]==' ')
				k=k+1;
			else
				q=q+1;
		}
	}
	printf("\n大写字母个数为:%d\n",d);
	printf("小写字母个数为:%d\n",x);
	printf("数字个数为:%\n",s);
	printf("空格个数为:%d\n",k);
	printf("其他字符个数为:%d\n",q);
	return 0;
}
