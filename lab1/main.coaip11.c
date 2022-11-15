#include <stdio.h>
#include <stdlib.h>
#include <math.h>        // подключаем математические функции
int main(void) {
	float x,a;                  // декларируем необходимые переменные
	printf("Enter x:");
	scanf("%f",&x);
	a=4*pow(x,8);                       //рассчитываем результат
	printf("Result:%f", a);               //вывод результата на экран
}
