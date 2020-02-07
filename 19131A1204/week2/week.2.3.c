#include <stdio.h>

int main()
{
	int num, result;

	printf("Enter an integer (atleast 2 digits) : ");

	scanf("%d", &num);

	result = num % 100;

	printf("The last two digits of given integer (%d) are %d \n", num , result);

	return 0;
}
