#include<stdio.h>
void main()
{
         char str[3][80];
         int i,j，a,b,c,d,e;//a,b,c,d,e分别为英文大写字母，小写字母，数字，空格，以及其他字符的个数。
         a=b=c=d=e=0;
         for(i=0;i<3;i++)
           {
            printf("请输入行%d:\n",i+1;
            gets（str[i]）;
            for(j=0;j<80 && str[i][j]!='\0';j++)
             {
               if (str[i][j]>='A' && str[i][j]<='Z')
                 a++;
               else if (str[i][j]>='a' && str[i][j]<='z')
                 b++;
               else if (str[i][j]>='0' && str[i][j]<='9')
                 c++;
               else if (str[i][j]==' ')
                 d++;
               else
                 e++;
             }
           }
         printf("大写字母数为%d\n小写字母数为%d\n数字数为%d\n空格数为%d\n其他字符数为%d\n",a,b,c,d,e);
}
