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
	int maxsum = 0, sum= 0, k;
	  for(k = 0; k < ; k++)
    {
        i = k < SZ - 1 ? 0 : index_i++;
        j = k < SZ - 1 ? index_j-- : 0;
        if(k >= SZ - 1)     size--;
        while(j < size)
            sum[k] += matr[i++][j++];
        if(sum[k] > max_sum)
            max_sum = sum[k];
    }
         printf (" The max sum of diagonal elements which are parallel to main diagonal: %.d\n", maxsum);
    }
 
	  	
	 

	
	
	
	
return 0;
}
