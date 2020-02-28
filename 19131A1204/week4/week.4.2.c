#include <stdio.h>

void main()
{
	int num, count;

	printf("Enter your number : ");

	scanf("%d", &num);

	count = 0;

	if( num > 0) {

	printf("The Factors are \n");

	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			printf("%d ", i, num);	count += 1;
		} 
	}

	printf("\n");
	
	if (count == 2) printf("%d is a prime number.\n", num);
	else  printf("%d is not a prime number.\n", num);
	
	} else {
		printf("Invalid input number!!!");
	}
	
	printf("\n");

}
