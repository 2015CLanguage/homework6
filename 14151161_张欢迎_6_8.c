#include<stdio.h> 
int main() 
{ 
	int r[3][3],i,j,a,b,c,m; 
	printf("输入数组:\n"); 
	for(i=0;i<3;i++) 
		for(j=0;j<3;j++) 
			scanf("%d",&r[i][j]); 
	for(i=0;i<3;i++) 
	{ 
		a=r[i][0]; 
		b=0; 
		for(j=0;j<3;j++) 
			if(r[i][j]>a) 
			{ 
				a=r[i][j]; 
				b=j; 
			} 
	    m=1; 
		for(c=0;c<3;c++) 
			if(a>r[a][c]) 
			{ 
				m=0; 
				continue; 
			} 
		if(m=1) 
		{ 
			printf("鞍点为 r[%d][%d]=%d\n",i,b,a); 
			break; 
		} 
	} 
	if(m=0) 
		printf("不存在鞍点\n"); 
	return 0; 
} 
