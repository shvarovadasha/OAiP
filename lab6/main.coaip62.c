#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 3
#define m 3
void main(void) {
	int a[i][j], i, j, p;
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
	 // нахождение произведения элементов в строках, которые не содержат отрицательных элементов
	for (i = 0; i < n; i ++) {
	 p=1;
	  if (a[i][i] > 0 ) {
		for (j = 0; j < n; j++)
		 p *= a[i][j];
		 printf (" The product of array elements in %d-row that do not contain negative elements: %.d\n", i + 1, p); 
	  }
    }
    //нахождение максимума среди сумм элементов диагоналей, параллельных главной диагонали матрицы	
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, maxsum = 0;
    for (i = 0; i < n; i++) {
    	for (j = 0; j < m; j++) {
    		sum1 = a[0][2];
    		sum2 = a[0][1] + a[1][2];
    		sum3 = a[1][0] + a[2][1];
    		sum4 = a[2][0];
    		if (sum1 > maxsum) {
    			maxsum = sum1;
			}
    		 else if (sum2 > maxsum) {
    		 	maxsum = sum2;
			 }
			  else if (sum3 > maxsum) {
			  	maxsum = sum3;
			  }
			   else if (sum4 > maxsum) {
			   	maxsum = sum4;
			   }
		}
	} 	
	printf (" The max sum of diagonal elements which are parallel to main diagonal: %.d\n", maxsum);	
    getch ();
}

	
	
