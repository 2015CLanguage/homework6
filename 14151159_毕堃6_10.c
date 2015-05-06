#include <stdio.h>
int main()
{
int daxie=xiaoxie=shuzi=qita=kongge=0;
char text[3][80];
for(i=0;i<=2;i++){
    printf("请输入第%d行文章:\n",i+1);
    gets(text[i]);}
for(i=0;i<=2;i++){
    for(j=0;j<=79&&text[i][j]!=0;j++){
    if(text[i][j]>='A'&&text[i][j]<='Z'){
    daxie++;}
    else if(text[i][j]>='a'&&text[i][j]<='z'){xiaoxie++;}
    else if(text[i][j]>='0'&&text[i][j]<='9'){shuzi++;}
    else if(text[i][j]==' '){kongge++;}
    else{qita++;}}}
printf("\n大写字母有%d个\n",daxie);
printf("小写字母有%d个\n",xiaoxie);
printf("数字有%d个\n",shuzi);
printf("空格有%d个\n",kongge);
printf("其他类型有%d个\n",qita);
return 0;
}
