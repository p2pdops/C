#include<stdio.h>
#include<stdlib.h>

void main() {
    int n,*pointer, i, sum = 0;
    scanf("%d", &n);

    pointer = (int*) malloc(n * sizeof(int));

    for(i = 0; i < n; i++) scanf("%d", (pointer + i));

    for(i = 0; i < n; i++) sum += *(pointer+i);

    printf("%d", sum);

    printf("\n");
}