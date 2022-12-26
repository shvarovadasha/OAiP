#include <conio.h>
#include <stdio.h>
int main() {
	int a[3][3];
	int i, j;
	int flag[3] = {0, 0, 0};
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
          flag[i] = 1;
          break;
        }
	 }
    }
    int sum = 0;
	for ( int i = 0; i < 3; i++)
		{
          sum += flag[i];
        }
	printf ("The sum of flag array = %d\n", sum);
	 
	 if (sum == 3) {
	 	for (i = 0; i < 3; i++) { 
	     for(j = 0; j < 3; j++) { 
	      a[i][j] = -a[i][j];
	    }
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