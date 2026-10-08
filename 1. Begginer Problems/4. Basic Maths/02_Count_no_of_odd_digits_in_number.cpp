#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void separating_number(int original_number);
};

void Solution :: separating_number(int original_number)
{
    int number = original_number;
    int count = 0;
    while (number>0)
    {
        int last_digit = number % 10;
        if (last_digit % 2 != 0)
        {
            count++;
        }
        number /= 10;
    }
    if (count == 1)
    {
        cout << "The no of odd digit in " << original_number << " is: " << count;
    }
    else if (count > 1)
    {
        cout << "The no of odd digits in " << original_number << " is: " << count;
    }
    else 
    {
        cout << "There is no odd numbers in " << original_number;
    }
}

int main()
{
    int original_number;
    cout << "Enter the value of original_number: ";
    cin >> original_number;

    int count = 0;
    Solution Sol;

    Sol.separating_number(original_number);
    return 0;
}