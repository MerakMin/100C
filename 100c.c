#include <stdio.h>
int main()
{
    char a[21];
	int b;
	char c[21];
	double d;
	scanf("%s", &a);
	scanf("%d", &b);
	scanf("%s", &c);
	scanf("%lg", &d);
	printf("%s\n%d\n%s\n%lg", a, b, c, d);
	return 0;
}