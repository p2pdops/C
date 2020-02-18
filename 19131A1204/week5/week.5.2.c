#include <stdio.h>

int calcLcm(int a, int b);
int calcGcd(int a, int b);

int main()
{
	
	int n1, n2;

	printf("Enter your 2 numbers : ");

	scanf("%d %d", &n1, &n2);


	
	// using lcm = n1*n2/gcd



	int gcd = calcGcd(n1,n2);	

	printf("The GCD of %d,%d is %d\n", n1, n2, gcd);

	int lcm = calcLcm(n1,n2);
	printf("The LCM of %d,%d (directly) is %d\n", n1, n2, lcm);

	lcm = (n1 * n2) / gcd;

	printf("The LCM of %d,%d (using GCD) is %d\n", n1, n2, lcm);

	printf("\n");
	return 0;
}

int calcLcm(int a, int b) {

	int	multiple = (a > b) ? a : b;

	while(1) {
		if(multiple % a == 0 && multiple % b == 0)
		 break;
		multiple++;	
	}

	return multiple;
}

int calcGcd(int a, int b) {

	int	rem;

	if( a < b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}

	while(rem != 0) {
		rem = a % b;
		a = b;
		b = rem;
	}
	
	return a;
}