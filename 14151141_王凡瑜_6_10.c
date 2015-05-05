#include<stdio.h>
void main()
{
	char text[3][80];
	printf("Please input a text of three lines, each of which ends with ENTER.\n");
	int i,j;
	for(i=0;i<=2;i++)
		gets(text[i]);
	int un=0,ln=0,nn=0,on=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<80;j++)
		{
			if(text[i][j]=='\0')
				break;
			if(text[i][j]>=65 && text[i][j]<=90)
				un+=1;
			else
			{
				if(text[i][j]>=97 && text[i][j]<=122)
					ln+=1;
				else
				{
					if(text[i][j]>=48 && text[i][j]<=57)
						nn+=1;
					else
						on+=1;
				}
			}
		}
	}
	printf("There are\n\t%d upper letters,\n\t%d lower letters,\n\t%d numbers,\n\t%d other types of characters\nin the text.\n",un,ln,nn,on);
	
}
