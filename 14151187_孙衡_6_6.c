#include<stdio.h> 
int main() 
{ 
	int i, j, a[10][10] = { 0 }; 
	for (i = 0; i<10; i++)  //给第一列元素及对角线元素赋值1 
	{ 
		a[i][i] = 1; 
		a[i][0] = 1; 
 	} 
 	for (i = 2; i<10; i++)  //给每一行中a[i][0]至a[i][i]间的元素赋值 
 	{ 
 		for (j = 1; j < i; j++) 
 		{ 
 		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  //定义元素的值的算法 
  	} 
 	} 
 	for (i = 0; i<10; i++)  //将非零数值按规律排列输出 
 	{ 
 		for (j = 0; j<i + 1; j++) 
 			printf("%6d", a[i][j]); 
 		printf("\n"); 
 	} 
 	printf("\n"); 
 	return 0; 
} 
