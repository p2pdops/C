#include <stdio.h>

int main()
{
	char ch;

	printf("Enter your char : ");

	scanf("%c", &ch);

	if ( 'A' <= ch && ch <= 'Z' ) printf("%c is uppercase, it's lowercase is %c", ch, ch + 32);
	else if ( 'a' <= ch && ch <= 'z' ) printf("%c is lowercase, it's uppercase is %c", ch, ch - 32);

	printf("\n");

	return 0;
}
