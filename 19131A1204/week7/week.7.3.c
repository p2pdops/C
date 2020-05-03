#include <stdio.h>
#include <string.h>

int main()
{
	int isPalindrome = 0;
	char str[255];

	scanf("%s", str);

    int length = strlen(str); 

	for (int i = 0; i < length; i++) 
		if( str[i] == str[(length - 1) - i]) 
			isPalindrome = 1;
		else 
			isPalindrome = 0;

	(isPalindrome == 1) ?
	printf("Palindrome") : 
	printf("Not a Palindrome");
	
	return 0;
}
