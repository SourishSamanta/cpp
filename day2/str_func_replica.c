// replicate strlen, strcpy, and strcat in c without string.h

#include <stdio.h>
#include <stdlib.h>

// function prototypes:
int strlength(char *s);
void strcopy(char *dst, char *src);
void strconcat(char *dst, char *src);

int main(int argc, char const *argv[])
{
    char *string1 = (char *)malloc(100 * sizeof(char));
    char *string2 = (char *)malloc(100 * sizeof(char));

    if (string1 == NULL || string2 == NULL)
    {
        printf("Memory allocation failed...");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", string1);

    // function calls:

    // string length
    printf("Length of string: %d\n", strlength(string1));

    // string copy
    printf("Enter string to copy to initial string: ");
    scanf("%s", string2);
    strcopy(string1, string2);
    printf("Copied string: %s\n", string1);

    // string concatenation
    printf("Enter string to concatenate with the previous string: ");
    scanf("%s", string2);
    strconcat(string1, string2);
    printf("Concatenated string: %s\n", string1);

    free(string1);
    free(string2);
    return 0;
}

// function definitions:

int strlength(char *s)
{
    int length;
    while (s[length] != '\0')
    {
        length++;
    }

    return length;
}

void strcopy(char *dst, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

void strconcat(char *dst, char *src)
{
    int i = 0;
    int j = 0;

    while (dst[i] != '\0')
    {
        i++;
    }
    // adding the space between words
    dst[i] = ' ';
    i++;

    while (src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
}