#include<stdio.h>  
int main()
{
	char s1[100],s2[100];
	int i;
	printf("Please input s1\n");
	scanf("%s",&s1);
	printf("\nThis is s2.\n");
	for(i=0;i<100&&s1[i]!='\0';i++){
		s2[i]=s1[i];
		printf("%c",s2[i]);}
	printf("\n");
	return 0;
}
