#include <stdio.h>
#include <conio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%3d%3d%3d%3d%3d%3d%3d%3d%3d%3d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	int i, k, sum1=0, sum2=0;
	printf("\n k = ");
	scanf("%d", &k);
	 for(i=0; i<k; i++)
	  sum1 = sum1 + a[i];
	 for(k+1; i<10; i++)
      sum2 = sum2 + a[i];
	 if(sum1 > sum2) printf("sum1>sum2");
	  else printf("sum1<sum2");
	return 0;
}
