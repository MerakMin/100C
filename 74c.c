#include <stdio.h>
int main()
{
    int a;
	scanf("%d", &a);
	while (a!=0)
	{
		printf("%d\n", a);
		a = a - 1;
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
		printf("%d\n", a);
		a = a - 1;
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
		printf("%d\n", a);
		a = a - 1;
		if(a==0) break;
	}
	return 0;
}