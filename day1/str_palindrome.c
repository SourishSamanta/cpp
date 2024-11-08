// palindrome check of string without string.h
#include <stdio.h>
// function prototypes
int strLength(char *s);
int isPalindrome(char *s);
int main(int argc, char const *argv[])
{
    char *str = "MADAM";
    if (isPalindrome(str) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}

int strLength(char *s)
{
    int len = 0;
    for (int i = 0; i < s[i] != 0; i++)
    {
        len++;
    }
    return len;
}

int isPalindrome(char *s)
{
    int bool_flag = 1; // assume true
    int len = strLength(s);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
        {
            bool_flag = 1;
            continue;
        }
        else
        {
            bool_flag = 0;
            break;
        }
    }
    return bool_flag;
}