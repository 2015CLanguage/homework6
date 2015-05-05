#include"stdio.h"
void main()
{
	char text[3][80]={"China","Thank you!","How are you?"};
    int i,j,num,big,lit,space,other;
	num=big=lit=space=other=0;
	for(i=0;i<3;i++)
		for(j=0;j<80&&text[i][j]!='\0';j++)
		{
			if((text[i][j]>='A')&&(text[i][j]<='Z'))
				big++;
			else if((text[i][j]>='a')&&(text[i][j]<='z'))
				lit++;
			else if((text[i][j]>='0')&&(text[i][j]<='9'))
				num++;
			else if(text[i][j]==' ')
				space++;
			else
				other++;

		}

printf("数字数目:%d\n",num);
printf("小写字母数目:%d\n",lit);
printf("大写字母数目:%d\n",big);
printf("空格数目:%d\n",space);
printf("其他字符数目:%d\n",other);
}
