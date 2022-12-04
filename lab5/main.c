#include <conio.h>
#include <stdio.h>
int main(){
	float a[3][3];
	int i, j;
	{
		printf("Vvedite element [%d,%d]\n", i+1, j+1); //ввод матрицы
		scanf("%f",&a[i][j]);
	}
	 for(i = 0; i < 3; i++){ 
	 for(j = 0; j < 3; j++){ 
	 printf(" %f", a[i][j]);} //вывод матрицы
	 printf("\n"); 
	}
	for(i = 0; i < 3; i++){
	for(j = 0; j < 3; j++)
	{
		if(a[i][j] < (float) 0){
			a[i][j]=(-1)*a[i][j];
			printf(" %f", a[i][j]);
		}
		printf("\n");}
	}
	return 0;
}