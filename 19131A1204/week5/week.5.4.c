#include <stdio.h>

void main()
{
    int i, j, size;
    
    printf("Enter size of triangle: ");
    scanf("%d", &size );
    
    for ( i = 0; i < size ; i++ ) {

        for (j = 0; j < ( size - 1 - i ); j++ )
            printf(" ");
            
        for (j = 0; j <= i; j++ )
            printf("%ld ", ncr(i,j));

        printf("\n");
    }

}

long ncr(int n, int r) {
	return fact(n) / ( fact(r)*fact(n-r) )  ; 
}

long fact(int n)
{
    long result = 1;

    for(int i = 1 ; i <= n ; i++ ) result = result * i;

    return result;
}