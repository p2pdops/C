#include <stdio.h>

int main()
{
	int a, b;

	int and, or, xor, not, leftshift, rightshift; 

	printf("Enter your input : ");

	scanf("%d %d", &a , &b);

	and = a & b ;
	or =  a | b ;
	xor =  a ^ b ;
	not =  ~ a ;
	leftshift =  a << 1 ;
	rightshift =  a >> 1 ;

	printf("The result of bitwise And is %d\n", and);
	printf("The result of bitwise OR is %d\n", or);
	printf("The result of bitwise XOR is %d\n", xor);
	printf("The result of bitwise NOT of %d is %d\n", a, not);
	printf("The result of LEFTSHIFT of %d by 1 is %d\n", a, leftshift);
	printf("The result of LEFTSHIFT of %d by 1 is %d\n", a, rightshift);

	return 0;
}
