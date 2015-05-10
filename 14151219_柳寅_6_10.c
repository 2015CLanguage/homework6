#include "stdio.h" 
  int main() 
 {int i,j,daxie=0,xiaoxie=0,num=0,block=0,other=0; 
  char s[3][80]; 
  printf("请输入文字：\n"); 
  for(i=0;i<3;i++) 
     { 
        gets(s[i]); 
        for(j=0;j<80 && s[i][j]!='\0';j++) 
         { 
            if(s[i][j]>='A' && s[i][j]<='Z') daxie++; 
            else if(s[i][j]>='a' && s[i][j]<='z') xiaoxie++; 
            else if(s[i][j]>='0' && s[i][j]<='9') num++; 
            else if(s[i][j]==' ') block++; 
            else other++; 
         } 
     } 
     printf("大写字母的个数为：%d\n",daxie); 
     printf("小写字母的个数为：%d\n",xiaoxie); 
     printf("数字的个数为：%d\n",num); 
     printf("空格的个数为：%d\n",block); 
     printf("其它字符的个数为：%d\n",other); 
 } 
