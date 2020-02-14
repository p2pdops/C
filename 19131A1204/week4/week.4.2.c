#include <stdio.h>

int main()
{
	
	char ch;

	printf("Enter your char : ");
	scanf("%c", &ch);

	if (('a'<=ch && ch <= 'z') || ('A'<=ch && ch <= 'Z') ) 
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			printf("'%c' is a vowel.", ch);
		else 
			printf("'%c' is a Consonant.", ch);
	} 
	else
	if ( '0' <= ch && ch <= '9' )
		 printf("'%c' is a digit.", ch);	
	else printf("'%c' is a special character.", ch);

	printf("\n");
	return 0;
}
