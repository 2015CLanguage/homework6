#include <stdio.h>
int main()
{
    int a[4][5],i,j,k,m,n,p=0;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
            printf("a[%d][%d]=?",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	k=a[0][0];
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(a[i][j]>k){
				k=a[i][j];
				m=j;
			}
		}
		for(n=0;n<4;n++){
			if(a[n][m]<k){
				p=1;
				break;
			}
		}
		if(p==0){
			printf("a[%d][%d]=%d",i,m,k);
			break;
		}
	}
	if(p==1)
		printf("不存在");
	return 0;
}
