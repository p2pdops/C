#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter integer values: ");

    scanf("%d %d", &a, &b);

    printf("The sum is %d\n", (a + b));
    printf("The difference is %d\n", (a - b));
    printf("The product is %d\n", (a * b));
    printf("The quotient is %d\n", (a / b));
    printf("The modulus is %d\n", (a % b));


    float c, d;

    printf("Enter float values: ");

    scanf("%f %f", &c, &d);

    printf("The sum is %f\n", (c + d));
    printf("The difference is %f\n", (c - d));
    printf("The product is %f\n", (c * d));
    printf("The quotient is %f\n", (c / d));
    printf("Modulo operator cannot be applied to floating point numbers\n");

    char e, f;

    printf("Enter char values: ");

    scanf("%c %c", &e, &f);

    printf("The sum is %d\n", (e + f));
    printf("The difference is %d\n", (e - f));
    printf("The quotient is %d\n", (e * f));
    printf("The modulus is %d\n", (e % f));

    return 0;
}
