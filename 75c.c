#include <stdio.h>
int main()
{
    int a;
	scanf("%d", &a);
	while (a!=0)
	{
		a--;
		printf("%d\n", a);
	}
	return 0;
}

#include <stdio.h>
int main()
{
    int a;
	scanf("%d", &a);
	do
	{
		a--;
		printf("%d\n", a);
	}while (a!=0);
	return 0;
}

#include <stdio.h>
int main()
{
    int a;
	scanf("%d", &a);
	for(;;)
	{
		a--;
		printf("%d\n", a);
		if(a==0) break;
	}
	return 0;
}