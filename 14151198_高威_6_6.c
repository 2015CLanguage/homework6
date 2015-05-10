#include <stdio.h>

int a[12][12];
int n;
int main()
{
	int i,j;
	for (i=1; i<=10; i++) a[i][1]=a[i][i]=1;
	for (i=3; i<=10; i++)
	{
		for (j=2; j<i; j++)  a[i][j]=a[i-1][j]+a[i-1][j-1];  
	}
	for (i=1; i<=10; i++)
	  {
	  	for (j=1; j<i; j++)  printf("%d ",a[i][j]); printf("%d\n",a[i][i]);
	  }
return 0;
}
