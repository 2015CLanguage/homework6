#include <stdio.h>
int main()
{
    char a[3][80];
	int b=0,c=0,d=0,e=0,f=0,i,j;
	for(i=0;i<3;i++){
	    printf("输入第%d行字符",i+1);
		gets (a[i]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<80&&a[i][j]!='\0';j++){
		    if(a[i][j]>='A'&&a[i][j]<='Z')
				b=b+1;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				c=c+1;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				d=d+1;
			else if(a[i][j]==' ')
				e=e+1;
			else
				f=f+1;
		}
	}
	printf("大写字母数量%d\n",b);
	printf("小写字母数量%d\n",c);
	printf("数字数量%d\n",d);
	printf("空格数量%d\n",e);
	printf("其他字符数量%d\n",f);
	return 0;
}
