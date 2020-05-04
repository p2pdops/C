#include <stdio.h>

int main()
{
    char str[30];

    scanf("%[^\n]s", str);

    int last_index = 0, n_words = 0;

    if (str[last_index]) n_words++;

    // N of chars
    while (1)
    {
        printf("%c\t%d\n", str[last_index], last_index);
        if (str[last_index + 1] == '\0')
            break;
        else if (str[last_index] == ' ')
        {
            if (str[last_index + 1] == ' ')
                continue;
            else
            {
                n_words++;
            }
        }

        last_index++;
    }

    int size = last_index + 1; 

    printf("\nNo. of character : %d", size);
    printf("\nNo. of Words : %d", n_words);
}