#include<stdio.h>
void main()
{
    int a;
    for (a = 401; a<500; a++)
	if (a / 100  + a / 10 % 10 + a % 10 == 9 && (a % 10 * 100 + a / 10 % 10 * 10 + a / 100) * 47 == a*36)
	printf("Iskomim chislom yavlyaetsya %d\n", a);
}
