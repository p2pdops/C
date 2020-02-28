#include <stdio.h>

int main()
{
	
	int num, i, count;

	printf("Enter your number : ");

	scanf("%d", &num);

	count = 0;

	for (i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			printf("%d is factor of %d\n", i, num);	count += 1;
		} 
	}

	if (count == 2)
	 printf("%d is a prime number.\n", num);
	else
	 printf("%d has %d factors.\n", num, count);

	printf("\n");
	return 0;
}
