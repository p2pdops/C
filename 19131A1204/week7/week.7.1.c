#include <stdio.h>
#include <string.h>

int main() {

	char str[50];
	int i = 0;
	scanf("%[^\n]s", str);

	while(str[i] != '\0') {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] = str[i] - 32;
		} else if ('A' <= str[i] && str[i] <= 'Z' ) {
			str[i] = str[i] + 32;
		}
		i++;
	}

	printf("%s", str);

	return 0;
}