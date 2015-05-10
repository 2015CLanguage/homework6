#include"stdio.h"
int main()
{
	char a[3][80];
	int d,x,k,s,q,i,j;
	printf("请输入三行文字:\n");
	for(i=0;i<3;i++)
	gets(a[i]);
	d=x=s=q=k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
			   d++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
			   x++;
			else if(a[i][j]==' ')
			   k++;
			else if(a[i][j]>='0'&&a[i][j]<='9')
			   s++;
			else
			   q++; 
		}
	}
	    printf("大写字母个数为:%d\n",d);
	    printf("小写字母个数为:%d\n",x);
	    printf("数字个数为:%d\n",s);
	    printf("空格个数为:%d\n",k);
	    printf("其他字符个数为:%d\n",q);
    return 0;		
}
