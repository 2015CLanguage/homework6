#include <stdio.h>
int main()
{int i,j,u,l,d,s,o;
char text[3][80];
u=l=d=s=o=0;
for(i=0;i<3;i++)
{printf("请输入行数%d:\n",i+1);
gets(text[i]);
for(j=0;j<80&&text[i][j]!='\0';j++)
{if(text[i][j]>='A'&&text[i][j]<='Z')
 u++;
else if(text[i][j]>='a'&&text[i][j]<='z')
 l++;
else if(text[i][j]>='0'&&text[i][j]<='9')
 d++;
else if(text[i][j]==' ')
 s++;
else
 o++;
}
}
printf("大写字母数量:%d\n",u);
printf("小写字母数量:%d\n",l);
printf("数字数目为:%d\n",d);
printf("空格数目为:%d\n",s);
printf("标点符号位:%d\n",o);
return 0;
}
