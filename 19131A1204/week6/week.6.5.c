#include <stdio.h>

int main()
{

	int size;

	printf("Enter the size of array : ");

	scanf("%d", &size);

	int array[size];
	
	for(int i = 0; i < size; i++) scanf("%d", &array[i]);

	int q, index, exist = 0;

	printf("Enter number to search : ");
	
	scanf("%d", &q);

	for(int j = 0; j < size; j++) 
		if(q == array[j]) {
			index = j;
			exist = 1;
		}
	
	if(exist == 1)
		printf("\n\"%d\" exists at position: \"%d\" ",q, index + 1);
	else 
		printf("\nDoesn't exist!");

	printf("\n\n");

	return 0;
}
