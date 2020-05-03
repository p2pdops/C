#include <stdio.h>
#include "week.5.2.h"

void main()
{
	
	int n1, n2;

	printf("Enter your 2 numbers : ");

	scanf("%d %d", &n1, &n2);

	// using lcm = n1*n2/gcd

	int gcd = calcGcd(n1,n2);

	printf("The GCD of %d,%d is %d\n", n1, n2, gcd);

	printf("The LCM of %d,%d (using GCD) is %d\n", n1, n2, calcLcmWithGcd(n1,n2,gcd) );

	printf("The LCM of %d,%d (directly) is %d\n", n1, n2, calcLcm(n1,n2));

	printf("\n");
	
}
