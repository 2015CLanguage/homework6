# include <stdio.h>
# include <string.h>
int main()
{
    int j,i,high,low,dig,space,other;
	high=low=dig=space=other=0;
    char str[3][80];
    for(i=0;i<3;i++)
    {
        printf("输入第%d行文字:",i+1);
        gets(str[i]);
        for(j=0;j<strlen(str[i]);j++)
        {
            if (str[i][j]<='Z'&&str[i][j]>='A')
                high+=1;
            else if (str[i][j]<='z'&&str[i][j]>='a')
                low+=1;
            else if (str[i][j]==' ')
                space+=1;
            else if (str[i][j]<='9'&&str[i][j]>='0')
                dig+=1;
            else
                other+=1;
        }
    }
    printf("大写字母有%d个;\n小写字母有%d个;\n数字有%d个;\n空格有%d个;\n其他有%d个\n",high,low,dig,space,other);
    return 0;
}
