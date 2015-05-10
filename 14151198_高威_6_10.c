#include <stdio.h>
#include <string>


char st[4][100];

int main()
{
	int num=0,nullspace=0,lowcase=0,upercase=0;
	int i,j;
	for (i=0; i<3; i++)
		gets(st[i]);
	for (i=0; i<3; i++)
	{
		for (j=0; j<80; j++)
		{
			if (st[i][j]==' ')  nullspace++;
			if (st[i][j]>='0'&&st[i][j]<='9')  num++;
			if (st[i][j]>='a'&& st[i][j]<='z') lowcase++;
			if (st[i][j]>='A'&&st[i][j]<='Z')  upercase++;
		}
	}
	printf("英文大写字母个数: %d\n",upercase);
	printf("英文小写字母个数: %d\n",lowcase);
	printf("数字个数: %d\n",num);
	printf("空格个数: %d\n",nullspace);
	printf("其他字符个数: %d\n",240-upercase-lowcase-num-nullspace);
	return 0;
} 
