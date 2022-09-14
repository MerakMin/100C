#include <stdio.h>
int main()
{
    int a, b;
	int c, m;
	scanf("%d %d", &c, &m);
	for (int a = 1; a <= c; a++)
	{
		for (int b = 1; b <= m; b++)
		{
			printf("%d %d\n", a, b);
		}
	}
	return 0;
}