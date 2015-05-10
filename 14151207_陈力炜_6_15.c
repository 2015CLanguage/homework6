#include <stdio.h>
#include <string.h>
int main(){
	char a[80],b[80];
	int i;
	printf("input s2:");
	scanf("%s",b);
	for (i=0;i<80;i++){
		if (b[i]!='\0'){
			a[i]=b[i];
		}
		else {
			a[i]=b[i];
			break;
		}
	}
	printf("%s\n",a);
	return 0;

}
