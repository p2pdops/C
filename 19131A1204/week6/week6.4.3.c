#include <stdio.h>

int main() 
{
    int m, n, q, r;
 
    int i, j, k;

    scanf("%d %d", &m, &n);
    
    int a[m][n];
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    
    scanf("%d %d", &q, &r);
    
    int b[q][r];

    int c[m][r];
    
    if (n == q) 
    {
        for (i = 0; i < q; i++) 
        {
            for (j = 0; j < r; j++) 
                scanf("%d", &b[i][j]);
        }
        
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < r; j++) 
            {
                c[i][j] = 0;
                for (k = 0; k < q; k++) 
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < r; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
  }
  else
    printf("Matrix Multiplication is not Possible");
  
  return 0;
}
