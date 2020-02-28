#include <stdio.h>
#include "week.5.4.h"


void main()
{
    int i, j, size;
    
    printf("Enter size of triangle: ");

    scanf("%d", &size );
    
    for ( i = 0 ; i < size ; i++ ) {

        for ( j = 0 ; j < ( size - i - 1 ) ; j++ )  printf(" ");
        
        for( j = 0 ; j <= i ; j++ ) printf("%ld ", ncr(i,j));

        printf("\n");
    }

}