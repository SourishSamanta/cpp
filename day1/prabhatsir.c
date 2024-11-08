// prabhat sir has came into the class,sir wants to check that debasmita is present in the class or not.
#include <stdio.h>
// function prototypes
int binary_search(int arr[], int size, int key);
int main(int argc, char const *argv[])
{
    int size = 61;
    int rollnum[size];

    // populate the array
    for (int i = 0; i < size; i++)
    {
        rollnum[i] = i+1;
    }
    printf("Array formed\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", rollnum[i]);
    }
    printf("\n");
    int target;
    printf("Enter roll number to search: ");
    scanf("%d", &target);
    int result = binary_search(rollnum, size, target);
    if (result != -1)
    {
        printf("%d is present!\n", rollnum[result]);
    }
    else
    {
        printf("%d is not present\n", target);
    }
    
    return 0;
}

int binary_search(int arr[], int size, int key)
{
    int low = 0;
    int high = size;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (key > arr[mid])
        {
            low = mid + 1; // search left half
        }
        else if (key < arr[mid])
        {
            high = mid - 1; // search right half
        }
        else
        {
            return mid;
        }
    }
    return -1;  // roll number not found
}