#include<stdio.h>
int main()
{
	int sum = 0;
	int a;
	scanf("%d", &a);
	for (int i = 0; i<=a; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;
	
}