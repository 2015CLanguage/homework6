#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,d,x,s,k,q;
	char  a[3][80];
	d=x=s=k=q=0;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行\n",i+1);
		gets(a[i]);
		for(j=0;(j<80)&&(a[i][j]!='\0');j++)
		{
			if((a[i][j]>='A')&&(a[i][j]<='Z'))
				d++;
			else if((a[i][j]>='a')&&(a[i][j]<='z'))
				x++;
			else if((a[i][j]>='0')&&(a[i][j]<='9'))
				s++;
			else if(a[i][j]==' ')
				k++;
			else
				q++;
		}
	}
	printf("其中有英文大写字母%d个\n",d);
	printf("其中有英文小写字母%d个\n",x);
	printf("其中有数字%d个\n",s);
	printf("其中有空格%d个\n",k);
	printf("其中有其他字符%d个\n",q);
	return 0;
}
