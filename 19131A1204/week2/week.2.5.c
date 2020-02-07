#include <stdio.h>

int main()
{

	// Method : 1 : Arthemetic Operations
	printf("--- Method 1 : Arthemetic Operations --- \n");

	int a, b, p ,q;

	printf("Enter two integers : ");

	scanf("%d %d", &a, &b);
	
	p = a; q = b;

	// Arthemetic operations
	a = a + b;
	b = a - b;
	a = a - b; 

	printf("The Values before swapping are %d %d \n", p, q);
	printf("The Values after  swapping are %d %d \n", a, b);

	
	// Method : 2 : Bitwise XOR Operation
	printf("--- Method 2 : Bitwise XOR Operation --- \n");

	printf("Enter two integers : ");

	scanf("%d %d", &a, &b);
	
	p = a; q = b;

	// Bitwise operations
	a = a ^ b;
    b = a ^ b;
    a = a ^ b;

	printf("The Values before swapping are %d %d \n", p, q);
	printf("The Values after  swapping are %d %d \n", a, b);

	return 0;
}
