#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int n,a,b,c;
	printf("Menu:\n");
	printf("1-slozhenie\n");
	printf("2-vichitanie\n");
	printf("3-umnozhenie\n");
	printf("4-delenie\n");
	printf("5-vozvedenie v stepen\n");
	printf("6-sravnenie\n");
	printf("7-nahozhdenie ostatka ot delenia\n");
	printf("8-vihod iz programmi\n");
	printf("Vash vibor?\n");
	scanf("%d", &n);
	switch (n)
	{
		case 1:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Summa ravna %d\n", a+b);
			break;
		case 2:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Raznost ravna %d\n", a-b);
			break;
		case 3:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Proizvedenie ravno %d\n", a*b);
			break;
		case 4:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Chastnoye ravno %d\n", a/b);
			break;
		case 5:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Vozvedenie v stepen ravno %d\n", c=pow(a,b));
			break;                    
		case 6:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			if (a>b) printf("Pervoe chislo bolshe\n");
			if (a<b) printf("Pervoe chislo menshe\n");
			if (a==b) printf("Chisla ravni\n");
			if (a!=b) printf("Chisla ne ravni\n");
			break;
		case 7:
			printf("Vvedite dva chisla\n");
			scanf("%d%d", &a, &b);
			printf("Ostatok ot delenia %d\n", a%b);
			break;
		case 8: return; break;
		default: printf("Nevernoye znachenie");	
	}
}
