#include <stdio.h>

int main()
{
    char str[255];
    int i = 0;

	scanf("%[^\n]s", &str);

    int allDigits = 0;

    int num1=0, num2=0;

    while(str[i] != '\0') {
        if( '0' <= str[i] && str[i] <= '9' || str[i] == '-' || str[i] == ' ') {
            allDigits = 1;
        }
        else {
            allDigits = 0;
        }
        i++;
    }

    if (!allDigits)  {
        printf("Not a number");
        return 0;
    }

    i = 0;

    while(str[i] != ' ') {
        if( '0' <= str[i] && str[i] <= '9')
            num1 = num1 * 10 + ( str[i] - '0');
        i++;
    }

    if(str[0] == '-') num1 *= -1;
    
    int j = ++i;
    while(str[i] != '\0') {
        if( '0' <= str[i] && str[i] <= '9')
            num2 = num2 * 10 + ( str[i] - '0');
         i++;
    }

    if(str[j] == '-') num2 *= -1;

    printf("%d", num1 + num2);

    return 0;
}