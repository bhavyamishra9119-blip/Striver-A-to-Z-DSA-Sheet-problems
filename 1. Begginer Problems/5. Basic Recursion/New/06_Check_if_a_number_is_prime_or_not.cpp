#include <iostream>
using namespace std;

class Solution
{
    public:
    void check_prime_or_not(int number);
};

void Solution :: check_prime_or_not(int number)
{
    int count = 0;
    for (int i=1; i<number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << number << " is a prime number";
    }
    else if (number == 1)
    {
        cout << number << " is neither prime nor composite";
    }
    else if (number < 1)
    {
        cout << "Invalid input";
    }
    else
    {
        cout << number  << " is a composite number";
    }
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    Solution Sol;
    Sol.check_prime_or_not(number);
    
    return 0;
}