#include <stdio.h>

int main()
{

	int a;
	printf("Enter your integer : ");
	scanf("%d", &a);
	printf("%d\n", a);
	printf("%d\n", &a);

	float b;
	printf("Enter your float : ");
	scanf("%f", &b);
	printf("%.2f\n", b);
	printf("%d\n", &b);

	char c;
	printf("Enter your char : ");
	scanf(" %c", &c);
	printf("%c\n", c);
	printf("%d\n", &c);

	return 0;
}
