#include <stdio.h>
long fun(int size)
{
    long result = 1;

    for(int i = 1 ; i <= size ; i++ ) result = result*i;

    return result;
}
int main()
{
    int i, j, size;
    printf("Enter size of triangle: ");
    scanf("%d",&size);
    for ( i = 0 ; i < size ; i++ )
    {
        for ( j = 0 ; j < ( size - i - 1 ) ; j++ )
            printf(" ");
        for( j = 0 ; j <= i ; j++ )
            printf("%ld ",fun(i)/(fun(j)*fun(i-j)));

        printf("\n");
    }
    return 0;
}