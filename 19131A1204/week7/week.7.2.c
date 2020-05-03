#include <stdio.h>

int main()
{

	char str[255];
	int i = 0;
	scanf("%[^\n]s", str);

	while(str[i] != '\0') {

		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i'  && str[i] != 'o'  && str[i] != 'u'  &&
			str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
				printf("%c", str[i]);

		i++;
	}


	return 0;
}