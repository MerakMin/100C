#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf((a==1)||(a==2) ? "winter" : (a==3)||(a==4)||(a==5) ? "spring" : (a==6)||(a==7)||(a==8) ? "summer" : (a==9)||(a==10)||(a==11) ? "fall" : "winter");
	return 0;
}