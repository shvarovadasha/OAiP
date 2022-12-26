#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void) 
{
	int **a ; // указатель на массив
	int i, j, n, m;
   	printf("Enter the cout of array rows :\n");
	scanf("%d",&n); 
	printf("Enter the cout of array columns:\n");
	scanf("%d",&m); 
    // Выделение памяти
    a = (int**)malloc(n*m * sizeof(int));
    // Ввод элементов массива
    for (i = 0; i < n; i++)  // цикл по строкам
    {
     for (j = 0; j < m; j++)  // цикл по столбцам
     {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", (a + i*n + j));
     }
    }
	// Вывод элементов массива
    for (i = 0; i < n; i++)  // цикл по строкам
    {
     for (j = 0; j < m; j++)  // цикл по столбцам
     {
      printf("%3d ", *(a + i*n + j));
     }
      printf("\n");
    }
	 // нахождение произведения элементов в строках, которые не содержат отрицательных элементов
	int p;
	for (i = 0; i < n; i ++) {
	  p = 1;
	    if (a[i][i] > 0 ) {
		 for (j = 0; j < n; j++)
		 p *= *(*(a + i) + j);
		 printf (" The product of array elements in %d-row that do not contain negative elements: %.d\n", p); 
	  }
    } 
    //нахождение максимума среди сумм элементов диагоналей, параллельных главной диагонали матрицы	
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, maxsum = **a;
    for (i = 0; i < n; i++) {
    	for (j = 0; j < m; j++) {
    		sum1 = *(*(a + 0) + 2);
    		sum2 = *(*(a + 0) + 1) + *(*(a + 1) + 2);
    		sum3 = *(*(a + 1) + 0) + *(*(a + 2) + 1);
    		sum4 = *(*(a + 2) + 0);
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

}

	