#include<stdio.h>
#define n 10  
#define m 10 
int main()
{
	int a[n][m],i,j,k,maxi,maxnumj,minj,x,y;
	printf("输入10行10列的元素:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		maxi=0;
		maxnumj=0;
		minj=0;
		x=0;
		y=0;
		for(j=1;j<m;j++){
			if(a[i][j] >= a[i][j-1]){
				maxi=a[i][j];
				maxnumj=j;
			}
			else{
				maxi=a[i][j-1];                                
				maxnumj=j-1;
			}
		}
		//printf("%d  %d",maxi,maxnumj);    
		for(j=0;j<n;j++){                                     
			if(a[j][maxnumj]<maxi){
				//printf("第%d行不存在鞍点\n",i+1);
				break;
			}
			if(j==3){
				printf("鞍点为：\n%d行，%d列，%d\n",i+1,maxnumj+1,maxi);
			}
		}
			
		
	}

	return 0;
}
