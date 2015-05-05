#include<stdio.h>  
int main()
{
	int i,j,a,b,c,d,e;
	a=b=c=d=e=0;
	char text[3][80];
	for(i=0;i<3;i++){
		printf("请输入第%d行:\n",i+1);
		gets(text[i]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<80&&text[i][j]!='\0';j++)
		{
			if(text[i][j]>='A'&&text[i][j]<='Z')
				a++;
			else if(text[i][j]>='a'&&text[i][j]<='z')
				b++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				c++;
			else if(text[i][j]==' ')
				d++;
			else
				e++;
		}
	}
	printf("\n大写字母有%d个",a);
	printf("\n小写字母有%d个",b);
	printf("\n数字有%d个",c);
	printf("\n空格有%d个",d);
	printf("\n其他字符有%d个\n",e);
	return 0;
}
