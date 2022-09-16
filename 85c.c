#include <stdio.h>
int main()
{
    long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	printf("%.1lf MB", (double)a * b * c * d / 8388608);
	return 0;
}
