#include <conio.h>
#include <stdio.h>
int main() {
	int a[3][3];
	int i, j;
	 for (i = 0; i < 3; i++) { 
	  for (j = 0; j < 3; j++) {
		printf ("Vvedite element [%d,%d]\n", i + 1, j + 1); //ввод матрицы
		scanf ("%d", &a[i][j]);
	  }
	 }
	 for (i = 0; i < 3; i++) { 
	  for (j = 0; j < 3; j++) { 
	    printf(" %d ", a[i][j]);
	  } //вывод матрицы
	    printf("\n"); 
	 }
	for ( int i = 0; i < 3; i++) {
	 for( int j = 0; j < 3; j++) {
	   if (a[i][j] <  0)
		{
          printf (" The row - %d of the array contains at least one negative element \n", i+1);
        }
	  a[i][j] = -a[i][j]; 
	 }
    }
	for (i = 0; i < 3; i++) { 
	 for(j = 0; j < 3; j++) { 
	   printf(" %d ", a[i][j]);
	 } //вывод матрицы
	   printf("\n");
    }
	return 0;
}