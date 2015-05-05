#include<stdio.h>

int main()
{
	int a[10][10],i,j;
	printf("杨辉三角形前十行是:\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			a[i][j]=0;
		}
	}
	for(i=0;i<10;i++){
		a[0][i]=1;
		a[i][i]=1;
	}
	for(i=2;i<10;i++){
		for(j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i][j]!=0){
				printf("%d ",a[i][j]);
			}
			

		}
	printf("\n");
	}

	return 0;
}
