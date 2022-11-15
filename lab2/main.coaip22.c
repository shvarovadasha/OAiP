#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,c;
	printf("Chislo a:");
	scanf("%d", &a);
	printf("Chislo b:");
	scanf("%d", &b);
	printf("Chislo c:");
	scanf("%d", &c);
	if(a+b==2*c || a+c==2*b || b+c==2*a) printf("Iz etih chisel mozhno obrazovat arifmeticheskuyu progressiyu");
	else printf("Iz etih chisel nelzya obrazovat arifmeticheskuyu progressiyu");
}
