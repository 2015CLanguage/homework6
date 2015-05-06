Enter file contents here
# include <stdio.h>
int main()
{
	char z[3][80];
	int i, j,a = 0, c = 0, m = 0, x = 0, y = 0, l = 0, w = 0;
	char k;
	for (i = 0; i <3; i++)
	{
		printf("请输入一段字符%d：\n",i+1);
		gets_s(z[i]);
		for (j = 0; j < 80 && z[i][j] != '\0'; j++)
		{
			if (z[i][j]>'0' && z[i][j] < '9')
				m = m + 1;
			else if (z[i][j]>'A' && z[i][j]< 'Z')
				x = x + 1;
			else if (z[i][j]>'a' && z[i][j]< 'z')
				y = y + 1;
			else if (z[i][j] == '\0')
				l = l + 1;
			else
				w = w + 1;
		}
