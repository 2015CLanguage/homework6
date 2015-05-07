#include "stdio.h"

int main()
{
    int s[3][3],i,j,k,a=0,b=0,max,q=0,p=0;
    //逐个输入数组元素并输出数组
    printf("请输入一3*3数组：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("s[%d][%d]=",i+1,j+1);
            scanf("%d",&s[i][j]);
        }
        printf("\n");
    }
    printf("您输入的数组为：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s[i][j]);
        }
        printf("\n");
    }
    //构造函数求鞍点，先找出每一行的最大数，再判断其是否是所在列最小的
    for(i=0;i<3;i++)
    {
        max=s[i][0];
        for(j=0;j<3;j++)
        {
            if(max<s[i][j]){max=s[i][j];a=j;}
        }
        for(k=0;k<3;k++)
            {if(s[k][a]<max) {q=1;b=k;}}
        if(q==0)
        {
            printf("鞍点为第%d行第%d列的元素%d\n",b+1,a+1,max);
            p=1;
        }
    }
    //若没有找到鞍点，输出“没有鞍点”
    if(p==0){printf("没有鞍点╮(╯_╰)╭\n");}
}
