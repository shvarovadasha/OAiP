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
	for (j=0;j<n;j++)
	{
	  printf("Vvedite element [%d]\n", i+1, j+1);
	  scanf("%d",ptr+i);}
	  printf("\nMassiv: \n", i+1);
	    for (i=0;i<n;i++)
	    printf("%d ", *(ptr+i));
	
	for(i=0; i<3; i++)
	{
	 if(a[i][j]>0){
	    p=1; 
		 for(j=0; j<3; j++)
		  p*=a[i][j];
		   printf("Proizvedenie elementov %d-stroki matrici = %.2d\n", i+1, p);
    }}
	for (i=0;i<n;i++){
	   if(*(ptr+i)==0) k=i;
	}
	for(int i=k;i<n;i++){
	   sum+= *(ptr+i);
	}
    printf("\nSumma posle 0 = %d",sum);
    getch();
}
