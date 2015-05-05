#include <stdio.h>
int main()
{
	int a[15][15]={0},n=0,i,j,k;
    while((n<1)||(n>15)||(n%2==0)){
	printf("请输入奇数n");
	scanf("%d",&n);
	}
	j=(n-1)/2;
	i=0;
	a[i][j]=1;
	for(k=2;k<=n*n;k++){
	if(i==0)
		i=n-1;
	else
		i=i-1;
	if(j==n-1)
		j=0;
	else
		j=j+1;
	if(a[i][j]==0)
		a[i][j]=k;
	else{
	    if(i==n-1)
			i=1;
		else
			i=i+2;
		if(j==0)
			j=n-1;
		else
			j=j-1;
		a[i][j]=k;
	}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
    return 0;

}
