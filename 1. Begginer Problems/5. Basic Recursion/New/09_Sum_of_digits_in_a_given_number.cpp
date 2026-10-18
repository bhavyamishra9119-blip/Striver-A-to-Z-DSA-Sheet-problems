#include <iostream>
using namespace std;

class Solution
{
    public:
    void sum_of_digits(int number);
};

void Solution :: sum_of_digits(int number)
{
    int last_digit;
    int sum = 0;
    int sum_again = 0;
    
    while (number > 0)
    {
        last_digit = number % 10;
        sum += last_digit;
        number /= 10;
    }
    while (sum > 0)
    {
        last_digit = sum % 10;
        sum_again += last_digit;
        sum /= 10;
    }
    cout << sum_again;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    Solution Sol;
    Sol.sum_of_digits(number);

    return 0;
}