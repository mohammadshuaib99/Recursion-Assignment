#include <iostream>
using namespace std;

int printGivenElement(int array[], int size, int idx, int key)
{
    if (idx == size)
    {
        return -1;
    }
    if (array[idx] == key)
        return idx;
    printGivenElement(array, size, idx + 1, key);
}

int main()
{
    int array[] = {1, 2, 3, 43, 25, 37, 67};
    int size = sizeof(array) / sizeof(int);
    int idx = 0;
    int key = 25;
    int result = printGivenElement(array, size, idx, key);
    cout << "The index of given element is : " << result << endl;
    return 0;
}
// output
// The index of given element is : 4