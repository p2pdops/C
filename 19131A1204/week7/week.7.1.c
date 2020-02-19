#include <stdio.h>

int main()
{

	char str[255];

	printf("Enter your string : ");

	scanf("%s", &str);

	for(int i = 0; i < 255; i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] = str[i] - 32;
		} else if ('A' <= str[i] && str[i] <= 'Z' ) {
			str[i] = str[i] + 32;
		}
	}

	printf("Uppercase & Lowercase fliped : %s", str);

	printf("\n\n");

	return 0;
}