#include <stdio.h>

int main() 
{
    
    int r1,c1,r2,c2;

    scanf("%d %d",&r1,&c1);

    int matrix_a[r1][c1];
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }
    }

    scanf("%d %d",&r2,&c2);

    int matrix_b[r1][c1];
    
    int matrix_result[r1][c1];
    
    for(int i=0;i<r1;i++)
    {
         for(int j=0;j<c1;j++)
         {
             scanf("%d",&matrix_b[i][j]);
         }
    }
    
    if(r1==r2&&c1==c2) 
    {
        for(int i=0;i<r1;i++)
        {
          for(int j=0;j<c1;j++)
          {
              matrix_result[i][j]=matrix_a[i][j]+matrix_b[i][j];   
          }
        }
        for(int i=0;i<r1;i++) 
         {
            for(int j=0; j<c1;j++)
            {
                printf("%d ",matrix_result[i][j]);   
            }
            printf("\n");
         }             
    }
    else 
    {
        printf("Matrix Addition is not possible");
    }
    
    return 0;
}
