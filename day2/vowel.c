#include <stdio.h>

// Function to count the number of vowels in a string
int countVowels(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:
            break;
        }
    }
    return count;
}

// Function to read a string from the user without using string.h
void readString(char *str, int maxLength)
{
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF && i < maxLength - 1)
    {
        str[i++] = ch;
    }
    str[i] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    readString(str, sizeof(str));

    int vowelCount = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}