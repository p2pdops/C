#include <stdio.h>

int main()
{

	char str[255];

	printf("Enter your string : ");

	scanf("%s", &str);

	for(int i = 0; i < 255; i++) {

		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			{
				str[i] = ' ';
			}
			
	}

	printf("Vowels removed => %s", str);

	printf("\n\n");
	return 0;
}