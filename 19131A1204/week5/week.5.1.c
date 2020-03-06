#include <stdio.h>

void addIO() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Sum is %d", (a + b));
}

void addO(int a, int b) {
	printf("Sum is %d", (a + b));
}

int addI() {
	int a, b;
	scanf("%d %d", &a, &b);
	return (a + b);
}

int add(int a, int b) {
	return (a + b);
}

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);

	//addIO();

	//addO(a, b);

	//c = addI(); printf("Sum is %d", c);

	//c = add(a, b); printf("Sum is %d", c);

	return 0;
}