#include<stdio.h>
void main()
{    int i,j,a[10]={0},b[10]={0};
     printf("%d\n",1);
     for(i=1;i<=9;i++)
	 {	  a[0]=b[0]=1;
	      for(j=0;j<=i;j++)
		  {   if(j==i)b[j]=1;
		      if(j==0)b[j]=1;
			    else b[j]=a[j]+a[j-1];
			    printf("%-5d",b[j]);
		  }
		  printf("\n");
		  for(j=0;j<10;j++)
		  {   a[j]=b[j];
		  }
	 }  
}
