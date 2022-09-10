#include <stdio.h>
int main()
{
    int i,n;

scanf("%d", &n);
for(i=0;i<n;i++)
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
}

	return 0;
}

#include <stdio.h>
int main()
{
    int a, i, b;
scanf("%d", &b);
i=b;
while(1)
{
    scanf("%d", &a);
    if(i==0)
        break;
    printf("%d\n", a);
    --i;
}
	return 0;
}

#include <stdio.h>
int main()
{
    int a, i, b;
scanf("%d", &b);
i=b;
do
{
    scanf("%d", &a);
    if(i==0)
        break;
    printf("%d\n", a);
    --i;
}while(1);
	return 0;
}