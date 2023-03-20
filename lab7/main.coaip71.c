#include <stdio.h>
#include <stdio.h>  
#include <conio.h> 
#define SIZE 20
//Найти в матрице первую строку, все элементы которой положительны, и
//сумму этих элементов. Уменьшить все элементы матрицы на эту сумму.
int a[SIZE][SIZE];
void input(int a[SIZE][SIZE], int n1, int m1);
int output(int a[SIZE][SIZE], int n1, int m1);

int main()
{
	int n, m;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("Enter m\n");
	scanf("%d", &m);
	input(a, n, m);
	output(a, n,m);
}

void input(int a[SIZE][SIZE], int n1, int m1)  //запись элементов массива
{
	int i, j;
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++);
		{
			printf("Enter element [%d,%d]\n", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

int output(int a[SIZE][SIZE], int n1, int m1)  //вывод на экран элементов массива
{
	int i, j;
	printf("\n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++);
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}
	return 0;
}

void search (int a[20][20], int n, int m) 
{
	int indexrow = -1;  //int indexrow = -1;  инициализация номера строки
	int i, j;
	int flag[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] <= 0)
			{
				break;
			}
			if (j == n - 1) //проверка дошел ли цикл до конца (если все элементы положительные, то...)
			{
				flag [i] = 1;
				indexrow = i;
			}
		}
	}

    if (flag[i] = 1)
   {
        float sum = 0;
        for (int j = 0; j < m; j++) //сумма элементов нужной строки
        {
            sum += a[indexrow][j];
        }
        for (int i = 0; i < n; i++) // уменьшили все элементы матрицы на сумму 
        {
            for (int j = 0; j < m
			; j++)
            {
                a[i][j] -= sum;
            }
        }
    }
	else if (flag[i] = 0)
	{
		printf ("There is no relevant row");
	}
	getch ();
}
