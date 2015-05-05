#include <stdio.h>
int main()
{
    int i,j,b,l,d,s,o;
    char text[3][80];
    b=l=d=s=o=0;
    for(i=0;i<3;i++){
        printf("请输入第%d行:\n",i+1);
        gets(text[i]);
        for(j=0;j<80&&text[i][j]!='\0';j++){
            if((text[i][j]>='A'&&text[i][j]<='Z'))
                b=b+1;
            else{
                if(text[i][j]>='a'&&text[i][j]<='z')
                    l=l+1;
                else{
                    if(text[i][j]>='0'&&text[i][j]<='9')
                        d=d+1;
                    else{
                        if(text[i][j]==' ')
                            s=s+1;
                        else
                            o=o+1;
                    }
                }
            }
        }
    }
    printf("\n大写字母的个数为%d",b);
    printf("\n小写字母的个数为%d",l);
    printf("\n数字的个数为%d",d);
    printf("\n空格的个数为%d",s);
    printf("\n其他字符的个数为%d",o);
    return 0;
}
