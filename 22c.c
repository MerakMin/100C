#include <stdio.h>
int main()
{
    char sum[2001];
    fgets(sum,2000,stdin);
    printf("%s",sum);
	return 0;
}