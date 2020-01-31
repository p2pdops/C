#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    scanf("%c %d %f", &c, &a, &b);

    printf("The Char value read is %c \n", c);
    printf("The Integer value read is %d \n", a);
    printf("The Float value read is %.2f \n", b);
    
    return 0;
}
