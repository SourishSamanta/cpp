#include <stdio.h>

// Function to access array elements using pointers
void accessArrayElements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element at index %d: %d\n", i, *(arr + i));
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Accessing array elements using pointers:\n");
    accessArrayElements(arr, size);

    return 0;
}