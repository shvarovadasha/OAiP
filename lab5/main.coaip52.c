#include <conio.h>
#include <stdio.h>
int main(){
	int a[3][3];
	int i, j, p, sum;
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
    
    printf ("Cymmi elementov diagonaley matrici, paralel'nie glavnoy: \n");
 for (j=0;j<(2*(3-1));j++) sum[j]=0;
  for (i=0;i<3;i++)
  {
      for (j=0;j<3;j++)
      {
          if(i!=j)
          {
              if(i>j)
                  sum[3-1-i+j]+=a[i][j];
              else
                  sum[3+j-i-2]+=a[i][j]; 
          }
      }      
  }
  for (j=0;j<2*(3-1);j++) printf("%d\n",sum[j]);  
  maxsum=-1000;
  for (j=0;j<2*(3-1);j++)
      if (maxsum<s[j]) 
          maxsum=s[j];
  printf("\n");
  printf("Max sum = %d\n",maxsum);
  getch();
    
    
    
	return 0;
}