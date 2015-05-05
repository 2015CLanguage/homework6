#include<stdio.h>
void main()
{
	char a[3][80],i,j,bw,sw,num,space,other;
	bw=sw=num=space=other=0;
	for(i=0;i<3;i++)
	{
		printf("Please input line %d:\n",i+1);
		gets(a[i]);
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				bw++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				sw++;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				num++;
			else if(a[i][j]==' ')
				space++;
			else
				other++;

		}
	}
	printf("大写字母:%d\n",bw);
	printf("小写字母:%d\n",sw);
	printf("数字:%d\n",num);
	printf("空格:%d\n",space);
	printf("其他字符:%d\n",other);
}
