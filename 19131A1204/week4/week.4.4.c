#include <stdio.h>
#include <math.h>

void main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int i = 0;

	while(1) {

		i++;

		if(i == c) goto label1;
		
		if (i == b) continue;
		
		if (i == a) break;

		printf("%d ", i);
	}

	printf("\n");

	label1 : printf("You r here due to goto : at %d", c);

	printf("\n");

}

