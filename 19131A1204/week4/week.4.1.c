#include <stdio.h>

void main()
{
	int n1, n2, i;
	
	printf("Enter your input : ");

	scanf("%d %d", &n1 , &n2);

	printf("The odd numbers between %d & %d : \n", n1,n2);

	for (i= n1 + 1; i < n2; i++) if(i % 2 != 0) printf("%d ", i);
	
	printf("\n");
	
}
