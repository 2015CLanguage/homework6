#include<stdio.h>
void main()
{
	printf("请输入一个4*5的数组。\n");
	int a[4][5];
	int i, j, k, l, m, n;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 4; i++){
		m = a[i][0];
		l = 0;
		for (j = 0; j < 5; j++){
			if (a[i][j]>m){
				m = a[i][j];
				l = j;
			}
			n = 1;
			for (k = 0; k < 4; k++){
				if (m>a[k][l]){
					n = 0;
					continue;
				}
			}
			if (n > 0){
				printf("a[%d][%d]=%d\n", i, l, m);
				break;
			}
		}
		if (n = 0)
			printf("不存在按点。");
	}
}
