#include <stdio.h>

int main()
{
    int size;
    
    printf("Enter the order of matrix :");

    scanf("%d", &size);

    int matrixA[size][size];

    int matrixB[size][size];

    int resultMatrix[size][size];

    printf("Enter matrix - A values :\n");

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
           // printf("a%d%d = ", i+1,j+1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter matrix - B values :\n");

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
          //  printf("b%d%d = ", i+1,j+1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Matrix addition
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    // print added matrix
    printf("Sum of matrices :\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            resultMatrix[i][j] = matrixA[i][j] * matrixB[j][i];
        }
    }
    // print multiplicated matrix
    printf("Multiplication of matrices :\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    //  Transpose - Matrix A
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            resultMatrix[i][j] = matrixA[j][i];
        }
    }

    // print Transpose - Matrix A
    printf("Transpose of matrix - A :\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    //  Transpose - Matrix B
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            resultMatrix[i][j] = matrixB[j][i];
        }
    }
    
    // print Transpose - Matrix B
    printf("Transpose of matrix - B :\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}