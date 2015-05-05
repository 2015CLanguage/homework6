#include"stdio.h"
int main()
{
	char string[3][80];
	int i,j,upp,low,num,spa,oth;
	upp=low=num=spa=oth=0;
	for(i=0;i<3;i++)
	{
		printf("please input line %d\n",(i+1));
		gets(string[i]);

		for(j=0;string[i][j]!='\0';j++)
		{
			if(string[i][j]>='A'&& string[i][j]<='Z')
				upp++;
			else if(string[i][j]>='a'&& string[i][j]<='z')
				low++;
			else if(string[i][j]>='0'&& string[i][j]<='9')
				num++;
			else if(string[i][j]=' ')
				spa++;
			else
				oth++;
		}
	}
	printf("upper letter:%d\n",upp);
	printf("lower letter:%d\n",low);
	printf("number:%d\n",num);
	printf("space:%d\n",spa);
	printf("other marks:%d\n",oth);
	
