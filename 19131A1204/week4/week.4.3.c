#include <stdio.h>
#include <math.h>

void main()
{
	int num, power, num_dup, num_const, length, sum, sum_;

	printf("Enter your input : ");

	scanf("%d %d", &num, &power);

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
		sum = sum + pow(num % 10, power); 
		sum_ = sum_ + pow(num % 10, length); 
		num = num / 10;
	}

	printf("Sum of individual digits raised to power of %d is: %d\n", power, sum);

	(sum_ == num_const)
	? printf("%d is an Armstrong Number.", num_const)
	: printf("%d is not an Armstrong Number.", num_const);

	printf("\n");

}
