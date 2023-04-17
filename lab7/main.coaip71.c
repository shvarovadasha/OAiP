//Найти в матрице первую строку, все элементы которой положительны, и
//сумму этих элементов. Уменьшить все элементы матрицы на эту сумму.
#include <stdio.h>

#define n 3
#define m 3

void findFirstRowAndReduce(int matrix[n][m]) {
    int sum = 0;
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        int allPositive = 1;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] <= 0) {
                allPositive = 0;
                break;
            }
        }
        
        if (allPositive) {
            found = 1;
            printf("First row with all positive elements: Row %d\n", i + 1);
            for (int j = 0; j < m; j++) {
                sum += matrix[i][j];
            }
            break;
        }
    }
    
    if (found) {
        printf("Sum of positive elements: %d\n", sum);
        printf("Reducing all elements by %d\n", sum);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] -= sum;
            }
        }
        printf("Matrix after reduction:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No row found with all positive elements.\n");
    }
}

int main() {
    int matrix[n][m] = {
        {1, 2, 3},
        {-4, 5, -6},
        {7, 8, 9}
    };
    
    printf("Original matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    findFirstRowAndReduce(matrix);
    
    return 0;
}




