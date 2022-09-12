#include <stdio.h>
int main()
{
    int i,a;
	scanf("%d", &a);
	for (int i = 0; i <=a; i++)
	{
		printf("%d\n",i);
	}
	return 0;
}


#include <stdio.h>
int main()
{
    int a,b=0;
	scanf("%d", &a);
	while(1)
	{
        printf("%d\n",b);
        if(a==b)
        {
        break;
        }
        b++;
	}
	return 0;
}


#include <stdio.h>
int main()
{
    int a,b=0;
	scanf("%d", &a);
	do
	{
        printf("%d\n",b);
        if(a==b)
        {
        break;
        }
        b++;
	}while (1);
	return 0;
}