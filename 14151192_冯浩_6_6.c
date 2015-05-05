#include<stdio.h>
int main()
{
	int i,j,k,l,a[11]={1},b[11]={0};
	for(i=1;i<=10;i++)
		{for(j=0;j<i;j++)
			printf("%5d",a[j]);
		 for(k=0;k<i;k++)
			a[k+1]=b[k]+b[k+1];
		 a[k]=1;
		 for(l=0;l<=k;l++)
			b[l]=a[l];
		 
		 printf("\n");
		}
	return 0;
}
