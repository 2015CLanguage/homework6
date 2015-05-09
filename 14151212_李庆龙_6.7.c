#define N  9                            /*Ä§·½Õó½×Êý*/ 
#include "stdio.h" 
main()
{
	int i, j, k, a[N][N];
	for (i = 0; i<N; i++)
	for (j = 0; j<N; j++)
		a[i][j] = 0;                       /*³õÊ¼ÖµÎªÁã*/
	j = N / 2;
	a[0][j] = 1;                             /*È·¶¨1µÄÎ»ÖÃ*/
	for (k = 2; k <= N*N; k++)
	{
		i--;
		j++;
		if (i<0)
			i = N - 1;                           /*ÐÐ³ö½ç*/
		else if (j>N - 1)
			j = 0;                             /*ÁÐ³ö½ç*/
		if (a[i][j] == 0)
			a[i][j] = k;                       /*°´¹æÂÉË³ÐòÈ·¶¨ÊýÖµÎ»ÖÃ*/
		else
		{
			i = (i + 2) % N;
			j = (j - 1 + N) % N;
			a[i][j] = k;                      /*ÒÑÓÐÊý×ÖÊ±Êý×ÖµÄÎ»ÖÃ*/
		}
	}
	printf("\n\n");
	for (i = 0; i<N; i++)
	{
		printf("\t");
		for (j = 0; j<N; j++)
			printf("%4d", a[i][j]);          /*ÏÔÊ¾Ä§·½Õó*/
		printf("\n\n");
	}
	system("pause");
}
