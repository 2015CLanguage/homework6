# include<stdio.h>
# include<string.h>

int main(void)
{
	char s1[80],s2[80];//定义两个数组

	unsigned i;//由于定义成int返回值会出现警告所以定义为unsigned
	printf("请输入s2：");
	scanf("%s",s2);
	for(i=0;i<=strlen(s2);i++)//将每个元素一一进行替换
		s1[i]=s2[i];
	printf("s1为：%s\n",s1);

	return 0;
}
