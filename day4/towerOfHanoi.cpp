#include <iostream>

using namespace std;

// Function to solve Tower of Hanoi problem recursively
void towerOfHanoi(int n, char src, char dst, char aux)
{
    // Base case: If there's only one disk, move it directly from 'src' to 'dst'
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << src << " to rod " << dst << endl;
        return;
    }

    // Step 1: Move n-1 disks from 'src' to 'aux' using 'dst' as auxiliary
    towerOfHanoi(n - 1, src, aux, dst);

    // Step 2: Move the nth (largest) disk from 'src' to 'dst'
    cout << "Move disk " << n << " from rod " << src << " to rod " << dst << endl;

    // Step 3: Move the n-1 disks from 'aux' to 'dst' using 'src' as auxiliary
    towerOfHanoi(n - 1, aux, dst, src);
}

int main()
{
    int n;

    // Input the number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve the Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B'); // A is the source rod, C is the destination rod, B is auxiliary

    return 0;
}
