#include <stdio.h>
#include <conio.h>
void main () {
	int i, n, k, *ptr, sum=0, kol=0;
	do {
		printf("Enter the cout of array elements (<30)\n");
		scanf("%d",&n); 
	} while (n >= 30);
	
	if(!(ptr = (int*)malloc(n*sizeof(int)))) // Необходимо всегда
	  { puts("Not enough memory");        // проверять выделилась
	    getch();                         // ли память
	    return;
	  } 
	for (i = 0; i < n; i++) {                   // ввод матрицы
	  printf("Enter element [%d]\n", i + 1);
	  scanf("%d", ptr + i);
	}
	  printf("\nARRAY: \n", i + 1);           // вывод матрицы
	    for (i = 0; i < n; i++)
	    printf("%d ", *(ptr+i));
	// поиск количества положительных элементов массива	
	for (i = 0; i < n; i++) {
	   if (*(ptr+i) > 0) kol++;
	}
	   printf("\nThere are %d positive elements", kol);
	// поиск суммы элементов массива, расположенных после последнего элемента, равного нулю
	for (i = 0; i < n; i++) {
	   if(*(ptr+i) == 0) k = i;
	}
	for (int i = k; i < n; i++) {
	   sum += *(ptr+i);
	}
    printf ("\nSum after 0 = %d", sum);
    getch ();
}
