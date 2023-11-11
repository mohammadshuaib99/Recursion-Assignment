#include <iostream>
using namespace std;

void calculatingSumOfDigit(int &sum, int number)
{
    if (number == 0)
    {
        return;
    }
    sum += (number % 10);
    calculatingSumOfDigit(sum, number / 10);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;
    calculatingSumOfDigit(sum, n);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
