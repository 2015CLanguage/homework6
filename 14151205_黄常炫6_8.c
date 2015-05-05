#include<stdio.h>
#define N 5
#define M 6
int main()
{int a[N][M],i,j,max,k,maxj,flag;
printf("请输入数组\n");
for(i=0;i<N;i++){
	for(j=0;j<M;j++){
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<N;i++){
	max=a[i][0];
	maxj=0;
	for(j=1;j<M;j++){
		if(a[i][j]>a[i][maxj]){
			max=a[i][j];
			maxj=j;
		}
	}
	flag=1;
	for(k=0;k<M;k++){
		if(max>a[k][maxj])
			flag=0;
	}
	if(flag){
		printf("a[%d][%d]=%d\n",i,maxj,a[i][maxj]);
		break;
	}
}
if(!flag)
printf("不存在鞍点\n");
return 0;
}
