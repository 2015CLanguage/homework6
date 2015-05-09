# include<stdio.h>
int main()
{
	char s1[100], s2[50],*p1,*p2;
	int m, n;
	void strcpy(char *p1, char *p2, int m, int n);
	p1 = s1;
	p2 = s2;
	printf("ÇëÒÀ´ÎÊäÈëÁ½¸ö×Ö·û´®£º\n");
	printf("µÚÒ»¸ö×Ö·û´®Îª£º");
	gets_s(s1, 100);
	printf("µÚ¶þ¸ö×Ö·û´®Îª£º");
	gets_s(s2, 50);
	m = strlen(s1);
	n = strlen(s2);
	strcpy(p1, p2, m, n);
	printf("%s", s1);
	system("pause");
}
void strcpy(char *p1, char *p2, int m, int n)
{
	int i, j;
	for (i = m; i < m + n; i++)
	{
		*(p1 + i) = *(p2 + i - m);
	}
	*(p1 + m + n) = '\0';
}
