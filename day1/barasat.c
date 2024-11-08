#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *station = malloc(100 * sizeof(char));
    // memory allocation check
    if (station == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the station name: ");
    scanf("%s", station);

    if (strcmp(station, "Madhyamgram") == 0)
    {
        printf("Destination found...\n");
    }
    else
    {
        printf("Destination not found...\n");
    }
    // free allocated memory from heap
    free(station);
    return 0;
}
