#include <stdio.h>
#include <math.h>
#include "week.5.3.h"

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);


	printf("Factorial of %d (using normal function) is %d\n", num, factorial(num));

	printf("Factorial of %d (using recursive function) is %d\n", num, factorial_rec(num));

	prime(num);

	printf("\n");

	return 0;
}
