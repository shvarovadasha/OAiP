#include <conio.h>
#include <stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	printf("%3d%3d%3d%3d%3d", a[0], a[1], a[2], a[3], a[4]);
	int i;
	int tmp= a[5-1];
	for(i=5-1;i>0;--i)
	a[i]=a[i-1];
	a[0]=tmp;
	printf("\n%3d%3d%3d%3d%3d", a[0], a[1], a[2], a[3], a[4]);
	return 0;
}
