#include <stdio.h>

int main()
{

	int size;

	printf("Enter the size of array : ");

	scanf("%d", &size);

	int array[size];
	
	for(int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	printf("Your array : [ ");
	for(int j = 0; j < size; j++) {
		(j == size - 1) ? printf("%d",array[j]) : printf("%d, ", array[j]);
	} 

	printf(" ]");

	printf("\n");

	return 0;
}