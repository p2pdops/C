#include <stdio.h>
#include <math.h>

int main()
{
	int num, num_dup, num_const, length, sum;

	printf("Enter your number : ");

	scanf("%d", &num_dup);

	num = num_dup;
	num_const = num_dup;
	length = 0;

	while(num_dup != 0)
	{
		length += 1;
		num_dup = num_dup/10;
	}

	sum = 0;
	
	while(num != 0)
	{
		sum = sum + pow(num % 10, length); 
		num = num/10;
	}

	printf("Sum of digits raised to count of given number is: %d\n", sum);

	(sum == num_const)
	? printf("The given number is an Armstrong Number.")
	: printf("The given number is not an Armstrong Number.");

	printf("\n");

	return 0;
}
