#include <stdio.h>
#include <stdlib.h>
#include <math.h>         // подключаем математические функции
void main(void) {
	float a,b,x,y,c,k,m,z,s,j;             // декларируем необходимые переменные
	printf("Enter x:");
	scanf("%f",&x);
	printf("Enter y:");
	scanf("%f",&y);
	printf("Enter z:");
	scanf("%f",&z);
	a=pow(2,-x);
	b=fabs(y);
	j=pow(b,(1.0/4.0));
	c=sqrt(x+j);
	k=x-(1/sin(z));
	m=cbrt(exp(k));
	s=a*c*m;	                      //рассчитываем результат
	printf("Result:%0.5f", s);           //вывод результата на экран
}
