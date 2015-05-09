#include <stdio.h>           //xt6-15     复制字符串函数 
#include <string.h>

#define M 10

int main()
{
	char s1[M],s2[M];
	int i;
	printf("输入s2：\n");
	for(i=0;i<M;i++){s2[i]=getchar();}  
	
	for(i=0;i<strlen(s2);i++)
	{
		s1[i]=s2[i];
	}
	printf("输出s1:%3s",s1);
	
	return 0;
}
