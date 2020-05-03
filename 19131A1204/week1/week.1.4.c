#include <stdio.h>

int main()
{

    float far, cel;

    printf("Enter temperature in Celsius: ");

    scanf("%f", &cel);

    far = (cel * 9 / 5) + 32;

    printf("%.2f C is %.2f F\n", cel, far);

    printf("Enter temperature in fahrenheit: ");

    scanf("%f", &far);

    cel = ((far - 32) * 5.0 / 9);

    printf("%.2f F is %.2f C\n", far, cel);

    return 0;
}
