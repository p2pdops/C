#include <stdio.h>

int main() 
{
    int r,c;
    
    scanf("%d %d",&r,&c);

    int matrix[r][c];

    int result[c][r];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);   
        }
    }

    for(int i=0;i<c;i++) 
    {
        for(int j=0;j<r;j++)
        {
            result[i][j]=matrix[j][i];
        }
    } 

    for(int i=0;i<c;i++) 
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    } 
    
    return 0;
}