#include <stdio.h>
#include <stdio.h>  
#define SIZE 20
//Найти в матрице первую строку, все элементы которой положительны, и
//сумму этих элементов. Уменьшить все элементы матрицы на эту сумму.
int a[SIZE][SIZE];

void main(void)
{
	int a[SIZE][SIZE];
	int n, m;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("Enter m\n");
	scanf("%d", &m);
	
	input(a, n, m);
	output(a, n,m);
	
	printf("\n");
	
	for (int i = 0; i < n; ++i)
	{
		if (search(a[i], n))
		{
		sum
		break;
	    }
    }
    
    for (int i = 0; i < n; i++)
	{
    	for (int j = 0; j < n; j++)
    	   printf("%d", a[i][j]);
    	   printf("\n");
	}
}

void input(int a[SIZE][SIZE], int n1, int m1)  //запись элементов массива
{
	int i, j;
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf("Enter element [%d,%d]: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
}

int output(int a[SIZE][SIZE], int n, int m)  //вывод на экран элементов массива
{
	printf("\n");
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}
	return 0;
}

int search(int a[SIZE][SIZE], int n, int m) 
{
	int i = 0;
	int j = 0;
	int k = 0;
	int index = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] > 0)
			k ++;
			else
			{
				k = 0;
				break;
			}
		}
		if (k == n)
		{
			index = i + 1;
			break;
		}
	printf("\n");
	}
	return 0;
}





