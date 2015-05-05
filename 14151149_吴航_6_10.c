#include<stdio.h>
int main()
{int i,j,q,w,e,r,x;
char text[3][80];
i=j=q=w=e=r=x=0;
for(i=0;i<3;i++)
	{printf("请输入第%d行\n",i+1);
	gets(text[i]);
	for(j=0;j<80&&text[i][j]!='/0';j++)
		{if(text[i][j]>='A'&&text[i][j]<='Z')
		q++;
		else if(text[i][j]>='a'&&text[i][j]<='z')
			w++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				e++;
			else if(text[i][j]==' ')
				r++;
	}
}
printf("小写字母：%d\n",q);
printf("大写字母：%d\n",w);
printf("数字：%d\n",e);
printf("其他：%d\n",r);
return 0;
}
