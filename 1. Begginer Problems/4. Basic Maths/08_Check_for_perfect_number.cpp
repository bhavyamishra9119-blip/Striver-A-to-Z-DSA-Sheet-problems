#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void check_for_perfect_number(int original_number, int number, int temporary_number);
};

void Solution :: check_for_perfect_number(int original_number, int number, int temporary_number)
{
    vector<int> last_digit(original_number);
    int sum = 0;

    for (int i=1; i<original_number; i++)
    {
        if (temporary_number % i == 0)
        {
            last_digit[i] = i;
            sum += last_digit[i];
        }
    }
    if (sum == original_number)
    {
        cout << original_number << " is a perfect number";
    }
    else 
    {
        cout << original_number << " is not a perfect number";
    }
}

int main()
{
    int original_number;
    cout << "Enter the number: ";
    cin >> original_number;

    int number = original_number;
    int temporary_number = original_number;

    Solution Sol;
    Sol.check_for_perfect_number(original_number, number, temporary_number);

    return 0;
}