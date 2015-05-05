#include <stdio.h>
int main()
{   
   int a,b,c,d,e,i,a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,e1,e2,e3;
   a=0;
   a1=0;
   a2=0;
   a3=0;
   b=0;
   b1=0;
   b2=0;
   b3=0;
   c=0;
   c1=0;
   c2=0;
   c3=0;
   d=0;
   d1=0;
   d2=0;
   d3=0;
   e=0;
   e1=0;
   e2=0;
   e3=0;
   char text1[80];
   char text2[80];
   char text3[80];
     printf("请输入第一行\n");
		 gets(text1);
     for (i=0;i<80  &&  text1[i]!='\0';i++)
	      {if (text1[i]>='A'&&text1[i]<='Z')
		       a1++;
		   else if (text1[i]>='a'&&text1[i]<='z')
			   b1++;
		   else if (text1[i]>='0'&&text1[i]<='9')
			   c1++;
		   else if (text1[i]==' ')
			   d1++;
		   else
			   e1++;
	 
	       }


     printf("请输入第二行\n");
	     gets(text2);

for (i=0;i<80   && text2[i]!='\0';i++)
	      {if (text2[i]>='A'&&text2[i]<='Z')
		       a2++;
		   else if (text2[i]>='a'&&text2[i]<='z')
			   b2++;
		   else if (text2[i]>='0'&&text2[i]<='9')
			   c2++;
		   else if (text2[i]==' ')
			   d2++;
		   else
			   e2++;
	 
	       }







	 printf("请输入第三行\n");
         gets(text3);

for (i=0;i<80  &&  text3[i]!='\0';i++)
	      {if (text3[i]>='A'&&text3[i]<='Z')
		       a3++;
		   else if (text3[i]>='a'&&text3[i]<='z')
			   b3++;
		   else if (text3[i]>='0'&&text3[i]<='9')
			   c3++;
		   else if (text3[i]==' ')
			   d3++;
		   else
			   e3++;
	 
	       }
a=a1+a2+a3;
b=b1+b2+b3;
c=c1+c2+c3;
d=d1+d2+d3;
e=e1+e2+e3;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);




return 0;

}
