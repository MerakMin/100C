#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (!a && !b)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
// if ~ else문

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf(!a && !b ? "1" : "0");
	return 0;
}
//삼항연산자