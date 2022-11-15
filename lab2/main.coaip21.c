#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d", &a);
	printf("Enter b:");
	scanf("%d", &b);
	printf("Enter c:");
	scanf("%d", &c);
	if(a==b && a==c && b==c) printf("Treygolnik ravnostoronniy");
	else printf("Treygolnik ne yavlyaetsya ravnostoronnim");
	}	
