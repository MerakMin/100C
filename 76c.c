#include <stdio.h>
int main()
{
    char x, y = 'a';
	scanf("%c", &x);
	do
	{
		printf("%c ", y);
		y++;
	} while (y<=x);
	return 0;
}

#include <stdio.h>
int main()
{
    char x, y = 'a';
	scanf("%c", &x);
	while (y<=x)
	{
		printf("%c ", y);
		y++;
	}
	return 0;
}

#include <stdio.h>
int main()
{
    int x, y = 97;
	scanf("%c", &x);
	for(;;)
	{
		printf("%c ", y);
		if(x==y) break;
		y++;
	}
	return 0;
}