#include<stdio.h>
#define N 4
#define M 5
int main()
{
	int s[N][M],i,j,max,min,p,q;
	printf("请输入一个%d行%d列的二维数组：\n",N,M);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&s[i][j]);		
		}
	}
	for(i=0;i<N;i++){
		max=s[i][0];
		for(j=0;j<M;j++){
			if(max<s[i][j]){
				max=s[i][j];
				p=i;
				q=j;
			}
		}
		min=s[p][q];
		for(i=0;i<N;i++){
			if(min>s[i][q]){
					break;
				}

			}
		if(i!=N)
			printf("没有鞍点");
		else
			printf("s[%d][%d]=%d；",p,q,s[p][q]);
		}
	printf("\n");
	return 0;
}

