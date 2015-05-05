#include<stdio.h>
void main()
{
	int s[10][10]={{1}},i,j;
        printf("%5d\n",s[0][0]);
	for(i=1;i<10;i++)
	{
		s[i][0]=1;
		printf("%5d",s[i][0]);
		for(j=1;j<=i;j++)
		{
			s[i][j]=s[i-1][j-1]+s[i-1][j];
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
}
