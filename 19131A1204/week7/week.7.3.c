#include <stdio.h>
#include <string.h>

int main()
{

	char str[255];

	int palindrome = 0;
	printf("Enter your string : ");

	scanf("%s", &str);

    int length = strlen(str); 


	for (int i = 0; i < length; i++) {
		if( str[i] == str[length - i - 1]) palindrome = 1;
		else palindrome = 0;
	}

	(palindrome == 1) ? printf("%s is palindrome.",str) : printf("%s is not palindrome.",str);
	printf("\n\n");
	return 0;
}