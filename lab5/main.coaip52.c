#include <conio.h>
#include <stdio.h>
int main(){
	int a[3][3];
	int i, j, p;
	for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	{
		printf("Vvedite element [%d,%d]\n", i+1, j+1);
		scanf("%d",&a[i][j]);
	}
	for(i = 0; i < 3; i++){ 
	 for(j = 0; j < 3; j++){ 
	  printf(" %d ", a[i][j]);} //вывод матрицы
	  printf("\n"); 
	}
	for(i=0; i<3; i++)
	{
	 if(a[i][j]>0){
	    p=1; 
		 for(j=0; j<3; j++)
		  p*=a[i][j];
		   printf("Proizvedenie elementov %d-stroki matrici = %.2d\n", i+1, p);
    }}
    
    
    
    
    
	return 0;
}