#include<stdio.h>
#define N 11
int main()
{
    int a[N][N];
    int i;
    int col,row;
    col = (N-1)/2;
    row = 0;
    a[row][col] = 1;
    for(i=2; i<=N*N;i++)
    {
        if((i-1)%N == 0 )
        {
            row++;
        }
        else
        {
            row--;
            row = (row+N)%N;
			col ++;
            col %= N;
        }
        a[row][col] = i;
    }
    for(row = 0;row<N;row++)
    {
        for(col = 0;col < N; col ++)
        {
            printf("%6d",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}
