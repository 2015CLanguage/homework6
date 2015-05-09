#include<stdio.h>
#define N 10

int main()
{
    int i,j,k,a[N][N]={0};
	for(i=0;i<N;i++){a[i][0]=1;a[i][i]=1;}
	printf("    1\n");
	for(j=1;j<N;j++)   //j is 1 ,k is 2
	{
		k=1;
		do
		{
			a[j][k]=a[j-1][k-1]+a[j-1][k];
			k++;
		}while(k<j);
		for(k=0;k<N;k++)
		{
			if(a[j][k]!=0) printf("%5d",a[j][k]);
			else continue;
		}
		printf("\n");
	}
	return 0;
}
