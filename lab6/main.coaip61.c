#include <stdio.h>
#include <conio.h>
void main ()
{
	int i, n, k, *ptr, sum=0, kol=0;
	do{
		printf("Vvedite kol-vo elementov massiva (<30)\n");
		scanf("%d",&n); 
	} while (n>=30);
	
	if(!(ptr=(int*)malloc(n*sizeof(int)))) //Необходимо всегда
	  { puts("Not enough memory");        // проверять выделилась
	    getch();                         // ли память
	    return;
	  } 
	
	for (i=0;i<n;i++)
	{
	  printf("Vvedite element [%d]\n", i+1);
	  scanf("%d",ptr+i);}
	  printf("\nMassiv: \n", i+1);
	    for (i=0;i<n;i++)
	    printf("%d ", *(ptr+i));
	
	for (i=0;i<n;i++){
	   if (*(ptr+i) > 0) kol++;}
	   printf("\nV massive %d polozhutelnih chisel", kol);
	for (i=0;i<n;i++){
	   if(*(ptr+i)==0) k=i;
	}
	for(int i=k;i<n;i++){
	   sum+= *(ptr+i);
	}
    printf("\nSumma posle 0 = %d",sum);
    getch();
}
