#include <stdio.h>
int main()
{
    int i,j,b=0,s=0,n=0,t=0,o=0;
    char text[3][80];
    for(i=0;i<3;i++)
    {
        printf("please input the %d line of the text:",i+1);
        gets(text[i]);

    for(j=0;(j<80)&&(text[i][j]!='\0');j++)
    {
        if((text[i][j]>='A')&&(text[i][j]<='Z'))
           b++;
        else if((text[i][j]>='a')&&(text[i][j]<='z'))
            s++;
        else if(text[i][j]==' ')
            t++;
        else if((text[i][j]>='0')&&(text[i][j] <='9'))
            n++;
        else o++;
    }}
    printf("\n大写字母数为：%d\n小写字母数为：%d\n数字数为：%d\n空格数为：%d\n其他字符数为：%d\n",b,s,n,t,o);

    return 0;
}
