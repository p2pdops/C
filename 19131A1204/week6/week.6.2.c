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

	int cPos, cNeg, cEve, cOdd ;

	cPos = cNeg = 0;
	cEve = cOdd = 0;

	for(int j = 0; j < size; j++) {
		if(array[j] > 0) cPos++;
		if(array[j] < 0) cNeg++;
		if(array[j] % 2 == 0) cEve++; 
		if(array[j] % 2 != 0) cOdd++; 
	}
	
	int sum = 0;
	for(int j = 0; j < size; j++) {
		sum += array[j];
	}

	printf("\nPositive Numbers: %d",cPos);
	printf("\nNegative Numbers: %d",cNeg);
	printf("\n");
	printf("\nEven Numbers: %d",cEve);
	printf("\nOdd Numbers: %d",cOdd);
	printf("\n");
	printf("\nSum : %d", sum);
	printf("\n");

	return 0;
}