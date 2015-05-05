#include<stdio.h>
int main()
{    int i=0,j=7,k;
     int a[15][15]={{0}};
     a[0][7]=1;
	 for(k=2;k<=225;k++)
	 { i=i-1;j=j+1;
	   if(i+1==0&&j-1==14){i=i+2;j=j-1;}
	   else{
	   if(i+1==0){i=14;}
	   if(j-1==14){j=0;}
	   }
	   if(a[i][j]!=0){i=i+2;j=j-1;a[i][j]=k;}
	   else a[i][j]=k;
	 }
	 for(i=0;i<15;i++)
	 {
	 for(j=0;j<15;j++) printf("%-5d",a[i][j]);
	 printf("\n");
	 }
	 return 0;
}
