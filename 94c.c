#include <stdio.h>
int main()
{
    int i, n;
	int a[10000];
	int min = 100;
	scanf("%d", &n);
	for (i = 1; i <= n;i++)
	{
		scanf("%d", &a[i]);
		if (min > a[i])
		{
			min = a[i];
		}
	}
		printf("%d", min);
	return 0;
}