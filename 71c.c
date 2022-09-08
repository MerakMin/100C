#include <stdio.h>
int main()
{
    int a = 1;
	
	A:
	scanf("%d", &a);
	if (a != 0)
	{
		printf("%d\n", a);
		goto A;
	}
	return 0;
}

#include <stdio.h>
int main()
{
    int a;
	do
	{
        scanf("%d", &a);
        if(a==0)
        {
            break;
        }
		printf("%d\n", a);
	}while (1);
	return 0;
}

#include <stdio.h>
int main()
{
    int a;
    for(;;)
    {
        scanf("%d", &a);
        if(a==0) break;
        printf("%d\n", a);
    }

	return 0;
}

#include <stdio.h>
int main()
{
    int a;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0) return 0;
		printf("%d\n", a);
	}
	return 0;
}
