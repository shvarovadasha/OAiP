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
	for(i=0; i<3; i++)
	for(j=0; j<3; j++){
	if(a[i][j] < 0) {
		p=1;
		p*=a[i][j]
	}
	}