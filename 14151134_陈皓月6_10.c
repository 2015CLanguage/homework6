#include<stdio.h>
void main()
{
	char a[3][80]={{"qaz, wsx. EDC, edc. rfv. 123 ,tgb; YIU, 456, yhn' 789. okm: uhb' 258/ VGY, 9636"},
					{"qaz, wsx. EDC, edc. rfv. 123 ,tgb; YIU, 456, yhn' 789. okm: uhb' 258/ VGY, 9636"},
					{"qaz, wsx. EDC, edc. rfv. 123 ,tgb; YIU, 456, yhn' 789. okm: uhb' 258/ VGY, 9636"}};  //设定一篇文章
	int i,j,m=0,n=0,x=0,y=0,z=0;
	for(i=0;i<3;i++)  //遍历所有行
	{
		for(j=0;j<80;j++)//遍历所有列
		{
			if('a'<=a[i][j]&&a[i][j]<='z')  //统计小写字母
				m=m+1;
			else if('A'<=a[i][j]&&a[i][j]<='Z')  //统计大写字母
				n=n+1;
			else if('0'<=a[i][j]&&a[i][j]<='9')  //统计数字个数
				x=x+1;
			else if(a[i][j]==' ')  //统计空格个数
				y=y+1;
			else    //统计其他字符
				z=z+1;
		}
	}
	printf("小写字母数为：%d\n",m);  //输出结果
	printf("大写字母数为：%d\n",n);
	printf("数字个数为：%d\n",x);
	printf("空格个数为：%d\n",y);
	printf("其他字符数为：%d\n",z);
}
