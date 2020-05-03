#include <stdio.h>
#include <string.h>

void main() {
    char str[50], str1[50];
    scanf("%[^\n]s", &str);

    strcpy(str1,str);

    printf("Length : %d", strlen(str)); // Length
    printf("\nNew String : %s", str1); // cp string 
    printf("\nReverse String : %s", strrev(str1)); // Reverse string
    printf("\nString Comparision Value : %d", strcmp(str1, str)); // Compare string
    printf("\nConcatenated String : %s", strcat(str1, str)); // Concatenate string

    printf("\n");
}