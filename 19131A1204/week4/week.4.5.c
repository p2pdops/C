#include <stdio.h>

void main()
{
	int size;

	printf("Enter your pyramid size : ");

	scanf("%d", &size);

	for (int i = size; i > 0; i-- )
	{

		for(int k = 0; k < (size - i); k++ ) printf(" "); // for inverted eq. triangle
		
		for(int j = i; j > 0; j-- ) printf("%d ", j);

		printf("\n");

	}

	printf("\n");

	for (int i = size; i > 0; i-- )
	{

		// for left orie. right triangle

		for(int j = i; j > 0; j-- ) printf("%d ", j);

		printf("\n");

	}
	
	printf("\n");
		
	for (int i = size; i > 0; i-- )
	{
		
		for(int k = 0; k < 2*(size - i); k++ ) printf(" ");  // for right orie. right triangle

		for(int j = i; j > 0; j-- ) printf("%d ", j);

		printf("\n");

	}

	printf("\n");

}
