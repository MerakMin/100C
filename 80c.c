#include <stdio.h>
int main()
{
    int a, b;
	scanf("%d", &a);
	int i = 0;
	b = 0;
	while (1)
	{
		i++;
		b += i;
		if (b >= a) { break; }
	}
	printf("%d", i);
	return 0;
}