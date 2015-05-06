#include<stdio.h>
void main()
{
	char s[3][3];
	int i,j,k,a=0,m=0,t,num=0,n=0;
    for(i=0;i<3;i++)
	{
		gets(s[i]);
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			a=s[j][0];
		    if(s[j][k]>a)
			{
				a=s[j][k];
				m=k;
			}
		}
	    for(t=0;t<3;t++)
		{
			if(s[t][m]<a)break;
			else
			{
				num++;	
			    break;
			}
		}
		if(num==3)
		{
			printf("%c",a);
			n++;
		}
	}
	if(n==0) printf("no");
	
}
