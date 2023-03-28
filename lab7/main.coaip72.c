#include <stdio.h>
#include <stdlib.h>
// 9. Ввести строку и удалить из нее лишние пробелы. Полученную строку вывести.
int main()
{
    char a[50];  // массив под входную строку
    int n = 0; // кол-во символов в символьном массиве без пробелов
    char b;
    do // читаем строку посимвольно из консоли, пока не встретится символ переноса строки
    {
        b = getchar(); // читаем символ
        if (b != ' ')  // если символ не равен пробелу, то добавляем его в массив a
        {
            a[n] = b;
            n++;
        }
    } while (b != '\n'); // читаем пока не встретим символ переноса строки
    a[n] = '\0'; // добавим в конец массива символ конца строки
    printf("%s\n", a); // выведем строку в консоль
    return 0;
}