#include <stdio.h>
#include <string.h>

int main()
{

	char str[255];

	int isPalindrome = 0;
	printf("Enter your string : ");

	scanf("%s", &str);

    int length = strlen(str); 


	for (int i = 0; i < length; i++) if( str[i] == str[(length - 1) - i]) isPalindrome = 1;

	(isPalindrome == 1) ? printf("%s is isPalindrome.",str) : printf("%s is not isPalindrome.",str);

	printf("\n\n");
	
	return 0;
}