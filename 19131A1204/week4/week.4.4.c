#include <stdio.h>

int main()
{
	int a,b;
	char op;
	

	printf("Enter your num1 num2 operator : ");

	scanf("%d %d %c", &a, &b, &op);

	if ( op == 'x' || op == 'X') op = '*';

	switch(op) {
		case '+':
			printf("Sum of %d & %d is %d", a, b, (a + b) );
			break;
		case '-':
			printf("Difference of %d & %d is %d", a, b, (a - b) );
			break;
		case '*':
			printf("Multiplication of %d & %d is %d", a, b, (a * b) );
			break;
		case '/':
			printf("Division of %d & %d is %d", a, b, (a / b) );
			break;
		case '%':
			printf("Modulo of %d & %d is %d", a, b, (a % b) );
			break;
		default :
			printf("Please enter the correct operator.");
			break;
	}

	printf("\n");

	return 0;
}
