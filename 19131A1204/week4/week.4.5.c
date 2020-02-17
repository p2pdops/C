#include <stdio.h>

int main()
{
	int size;

	printf("Enter your size : ");

	scanf("%d", &size);

	
	for (int i=size; i > 0; i-- )
	{

		for(int k = 0; k < size - i; k++ ) printf(" ");

		for(int j = i; j > 0; j-- ) printf("%d ", j);

		printf("\n");

	}

	printf("\n");

	return 0;
}
