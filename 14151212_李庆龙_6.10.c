# include<stdio.h>
int main()
{
	char a[3][80];
	int i,j,x,y,z,o,p;
	printf("ÒÀ´ÎÊäÈëÈýÐÐ×Ö·û£º");
	for (i = 0; i < 3; i++)
	{
		gets_s(a[i],80);
	}
	for (i = 0; i < 3; i++)
	{
		printf("µÚ%dÐÐ¸÷×Ö·ûÍ³¼Æ½á¹ûÎª£º\n", i + 1);
		x = 0;
		y = 0;
		z = 0;
		o = 0;
		p = 0;
		for (j = 0; j < strlen(a[i]); j++)
		{
			if ((a[i][j] < +'Z') && (a[i][j] >= 'A'))
				x = x + 1;
			else if ((a[i][j] <= 'z') && (a[i][j]>'a'))
				y = y + 1;
			else if ((a[i][j] <= '9') && (a[i][j] >= '0'))
				z = z + 1;
			else if ((a[i][j]) == ' ')
				o = o + 1;
			else
				p++;
		}
		printf("´óÐ´×ÖÄ¸¸öÊýÎª£º%d\n", x);
		printf("Ð¡Ð´×ÖÄ¸¸öÊýÎª£º%d\n", y);
		printf("Êý×Ö¸öÊýÎª£º%d\n", z);
		printf("¿Õ¸ñ¸öÊýÎª£º%d\n", o);
		printf("ÆäËû×Ö·û¸öÊýÎª£º%d\n", p);
	}
	system("pause");
}
