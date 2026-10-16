#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void return_the_largest_digit(int number, int original_number, int saved_number);
};

void Solution :: return_the_largest_digit(int number, int original_number, int saved_number)
{
    // Counting digits of the number
    int count = 0;
    while (number>0)
    {
        number /= 10;
        count++;
    }

    vector<int> lastDigit(count);

    // Storing the last digits of the number in the array (lastDigit)
    for (int i=0; i<count; i++)
    {
        lastDigit[i] = original_number % 10;
        original_number /= 10;
    }

    // Sorting the array (lastDigit)
    for (int i=1; i<count; i++)
    {
        if (lastDigit[i] < lastDigit[i-1])
        {
            swap(lastDigit[i-1], lastDigit[i]);
        }
    }
    cout << "The largest digit in the " << saved_number << " is: " << lastDigit[count-1];
}

int main()
{
    int original_number;
    cout << "Enter the value of the number: ";
    cin >> original_number;

    int number = original_number;
    int saved_number = original_number;

    Solution Sol;
    Sol.return_the_largest_digit(number, original_number, saved_number);

    return 0;
}