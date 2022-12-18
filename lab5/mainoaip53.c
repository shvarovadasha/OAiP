#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 3
#define m 3
int main() {
	int a[n][m];
	int i, j, k;
	 for (i = 0; i < n; i++) { 
	  for (j = 0; j < m; j++) {
		printf ("Enter the value of the element [%d,%d]\n", i + 1, j + 1); //ввод матрицы
		scanf ("%d", &a[i][j]);
	  }
	 }
	 for (i = 0; i < n; i++) { 
	  for (j = 0; j < n; j++) { 
	    printf(" %d ", a[i][j]);
	  }                          //вывод матрицы
	    printf ("\n"); 
	 }  
	 // найти в матрице первую строку, все элементы которой равны нулю
	 for (i = 0; i < n; i++) {
      k = 0;
       for (j = 0; j < m; j++) {
        if (a[i][j] == 0)
	    k++;
       } 
     }
     // все элементы столбца с таким же номером уменьшить вдвое
     for (j = 0; j < m; j++) {
     a[j][i] /= 2;
     }
     // вывод матрицы после преобазований
     for (i = 0; i < n; i++) {
      for(j = 0; j < m; j++)
      printf(" %d ",a[i][j]);
      printf ("\n"); 
     }
    return 0;   
}
