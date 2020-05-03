#include <stdio.h>
#include <stdlib.h>


void add(int *sum) {
    int a, b;
    scanf("%d %d", &a, &b);
    *sum = a + b;
}

void main() {
    int *sum = malloc(sizeof(int));
    
    add(sum);
    
    printf("%d", *sum);

    printf("\n");
}