#include<stdio.h>
int main(){
	int a[16][16]={0},i,j,k,n,t,lim;
	printf("n=");
	scanf("%d",&n);
	j=(n+1)/2;
	lim=n*n;
	i=1;
	a[1][j]=1;
	for (k=2;k<=lim;k++){
		t=0;
		if ((i-1==0) && (j<=n-1) && (t==0)){
			i=n;
			j=j+1;
			a[i][j]=k;
			t=1;
		}
		else if ((j==n) && (i!=1) && (t==0)){
			j=1;
			i=i-1;
			a[i][j]=k;
			t=1;
		}
		else if ((a[i-1][j+1]!=0) && (t==0)){
			i=i+1;
			a[i][j]=k;
			t=1;
		}
		else if (t==0)
			j=1+1;
			i=i-1;
			a[i][j]=k;
			t=1;
	}
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%12d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;

}
