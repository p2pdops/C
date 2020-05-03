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

	int smallest, largest;
	smallest = largest = array[0];

	for(int j = 0; j < size; j++) {
		if(smallest > array[j]) smallest = array[j];

		if(largest < array[j]) largest = array[j];
	}


	printf("\nSmallest Number: %d",smallest);
	printf("\nLargest Number : %d",largest);
	printf("\n\n");

	return 0;	
}