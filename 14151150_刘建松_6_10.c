#include<stdio.h>
#include <math.h>
int main()
{
	char s[3][80];
	int i,j,cap,low,fig,spa,oth;
	oth=spa=fig=low=cap=0;
	for(i=0;i<3;i++){
		printf("请输入第%d行文字:",i+1);
		gets(s[i]);
		for(j=0;(j<80)&&(s[i][j]!='\0');j++){
			  if((s[i][j]>='A')&&(s[i][j]<='Z'))
			      cap=cap+1;
			  else if((s[i][j]>='a')&&(s[i][j]>='z'))
			      low=low+1;
			  else if((s[i][j]>='0')&&(s[i][j]<='9'))
			      fig=fig+1;
			  else if(s[i][j]==' ')
			      spa=spa+1;
			  else
			      oth=oth+1;
		}
	}
	printf("大写字母个数为：%d\n",cap);
	printf("小写字母个数为：%d\n",low);
	printf("数字个数为：%d\n",fig);
	printf("空格个数为：%d\n",spa);
	printf("其他字符个数为：%d\n",oth);
	return 0;
}
