#include <stdio.h>

void main()
{

	int n, temp;

	printf("Usage of continue statement : ");

	scanf("%d %d", &n, &temp);

	for(int i = 0; i< n; i++) {
		
		if (i == temp) continue;

		printf("%d ", i);
	}

	printf("\n");

	printf("Usage of break statement : ");

	scanf("%d %d", &n, &temp);

	for(int i = 0; i< n; i++) {
		
		if (i == temp) break;

		printf("%d ", i);
	}

	printf("\n");

	printf("Usage of goto statement : ");

	scanf("%d %d", &n, &temp);

	for(int i = 0; i< n; i++) {
		
		if (i == temp) goto label;

		printf("%d ", i);
	}

	printf("\n");

	label : printf("Loop break at %d", temp);

	printf("\n");



}
