#include <stdio.h>
#define M 3
#define N 80

int main()
{
	char a[M][N];
	int i,j,engh,engl,num,space,other;
	printf("输入：\n");
	for(i=0;i<M;i++){for(j=0;j<N;j++) a[i][j]=getchar();}
	
	engh=engl=num=space=other=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N&&a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z'){engh++;}
			else if(a[i][j]>='a'&&a[i][j]<='z'){engl++;}
			else if(a[i][j]>='0'&&a[i][j]<='9'){num++;}
			else if(a[i][j]==' '){space++;}
			else{other++;}
		}
	}
	printf("大写字母%d,小写字母%d,数字%d,空格%d,其它%d",engh,engl,num,space,other);
	return 0;
 } 
