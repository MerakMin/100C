#include <stdio.h>
int main()
{
    int a, y, c, d = 0;
	int r, g, b;
	scanf("%d%d%d", &r, &g, &b);
	for (a = 0;a < r;a++)
		for (y = 0; y < g;y++)
			for (c = 0;c < b;c++)
			{
				printf("%d %d %d\n", a, y, c);
				d++;
			}
	printf("%d", d);
	return 0;
}