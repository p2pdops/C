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

int prime(int num) {
	int count = 0;
	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			count += 1;
		} 
	}

	if (count == 2) printf("Prime check: %d is a prime number.\n", num);
	return (count);
}

int factorial(int num) {
	int fac = 1;
	for(int i = 1; i <= num; i++ ) fac = fac * i ;
	return fac;
}

int factorial_rec(int num) { return (num != 0) ? num * factorial_rec(num - 1) : 1; }