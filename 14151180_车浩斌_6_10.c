#include<stdio.h>
void main()
{
	char s[3][80];
	int i,j,up,low,num,spa,oth;
	up=low=num=spa=oth=0;
	for(i=0;i<3;i++)
		{
			printf("enter the %d line:\n",i+1);
			gets(s[i]);
			for(j=0;j<80&&s[i][j]!='\0';j++)
				if(s[i][j]>='A'&&s[i][j]<='Z')
						up++;
				else if(s[i][j]>='a'&&s[i][j]<='z')
						low++;
				else if(s[i][j]>='0'&&s[i][j]<='9')
						num++;
				else if(s[i][j]==' ')
						spa++;
				else
						oth++;
		}
	
	printf("up=%d\n",up);
	printf("low=%d\n",low);
	printf("num=%d\n",num);
	printf("spa=%d\n",spa);
	printf("oth=%d\n",oth);
}
