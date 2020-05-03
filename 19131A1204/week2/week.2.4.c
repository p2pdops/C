#include <stdio.h>

int main()
{
	float num1, num2, num3, greatest;

	printf("Enter your 3 numbers : ");
	
	scanf("%f %f %f", &num1, &num2, &num3);

	greatest  = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
 
 	printf("The greatest of three numbers is %f \n", greatest);
	
	return 0;
}
