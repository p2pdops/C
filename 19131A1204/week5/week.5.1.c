#include <stdio.h>

int main()
{
	int n1,n2, i;
	
	printf("Enter your input : ");

	scanf("%d %d", &n1 , &n2);


	printf("The odd numbers between %d & %d : \n", n1,n2);
	for (i= n1; i< n2; i++) 
	{
		if(i%2 == 1) printf("%d\n", i);
	}

	printf("\n");
	
	return 0;
}