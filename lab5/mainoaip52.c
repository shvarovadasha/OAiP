#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 3
#define m 3
int main() {
	int a[n][m];
	int i, j, p;
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
	for (i = 0; i < n; i ++) {
	    p=1;
		for (j = 0; j < n; j++)
		if (a[i][i] > 0 )
		
		  
		  printf (" The product of array elements in %d-row that do not contain negative elements: %.d\n", i + 1, p *= a[i][j]); 
		  else if (a[i][i]<0) printf("Tere are negative elements in %d-row\n",i+1);
}
		
return 0;
}
