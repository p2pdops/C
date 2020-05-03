#include <stdio.h>

int main()
{
	int n1,n2, num;
	
	printf("Enter your input : ");

	scanf("%d %d %d", &n1 , &n2, &num);

	if ( n1 < num && num < n2 || n1 > num && num > n2 ) printf("%d is between %d & %d\n", num, n1 ,n2);

	else printf("%d is not between %d & %d\n", num, n1 ,n2);

	printf("\n");
	
	return 0;
}