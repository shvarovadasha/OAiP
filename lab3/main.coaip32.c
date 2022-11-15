#include <stdio.h>
int main()
{
    long long int a=1;
    while (a < 1000000)
    {  
	a*=a; 
	++a; 
	printf("Chislo X: %llu\n", a); 
	} 
	return 0;
}
