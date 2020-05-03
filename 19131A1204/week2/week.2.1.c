#include <stdio.h>

int main()
{
	int n1,n2;

	float t1,t2;

	printf("Enter your input : ");

	scanf("%d %d", &n1 , &n2);

	t1 = n1++;

	t2 = ++n2;

	printf("After Post increment 1st Value (%d) is %f \n", n1, t1);

	printf("After Pre increment 2nd Value (%d) is %f \n", n2, t2);

	return 0;
}
