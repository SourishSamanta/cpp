#include <iostream>

using namespace std;

int main()
{
    int rows;

    // Input the number of rows for Pascal's Triangle
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    // Declare a 2D array to store Pascal's triangle
    int pascal[rows][rows];

    // Generate Pascal's Triangle
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            // The first and last values in every row are 1
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                // Every other value is the sum of the two values above it
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle in reverse order by removing leading spaces
    for (int i = rows - 1; i >= 0; --i)
    {
        // Print the current row without altering the structure
        for (int j = 0; j <= i; ++j)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
