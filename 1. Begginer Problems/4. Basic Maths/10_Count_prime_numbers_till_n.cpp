#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void prime_factors(int number);
};

void Solution :: prime_factors(int number)
{
    int count = 0;
    for (int i=2; i<number; i++)
    {
        if (number % i == 0)
        {
            for (int j=1; j<=i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    if (count > 2)
                    {
                        cout << number << " is not a prime number";
                    }
                    else 
                    {
                        cout << number << " is a prime number";
                    }
                }
            }
        }
    }
}

int main()
{
    int number;
    cout << "Enter the value of the number: ";
    cin >> number;

    Solution Sol;
    Sol.prime_factors(number);
    return 0;
}