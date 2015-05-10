#include <stdio.h>
void main(){
	int i,j,v,w,x,y,z;
	char txt[3][80];
	v=w=x=y=z=0;
	for (i=0;i<3;i++){
		printf("input line %d:",i+1);
		get(text[1]);
		for (j=0;j<=80&&text[i[]j]!='\0';j++){
			if (text[i][j]>='A')&&(text[i][j]<='z'){
				v++;
			}
			else if(text[i][j]>='a'&&text[i][j]<='z'){
				w++;
			}
			else if (text[i][j]>='0'&&text[i][j]<='9'){
				x++;
			}
			else if (text[i][j]==' '){
				y++;
			}
		  else 
				z++;
		}
	}
	printf("大写字母：%d\n",v);
	printf("小写字母：%d\n",w);
	printf("数字：%d\n",x);
	printf("空格：%d\n",y);
	printf("其他：%d\n",z);
}
