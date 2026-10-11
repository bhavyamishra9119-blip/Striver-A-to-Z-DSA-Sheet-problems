#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void factors_of_number(int number, vector<int>& factors);
    void prime_factors_of_number(int number, vector<int>& factors);
};

void Solution :: factors_of_number(int number, vector<int>& factors)
{
    for (int i=2; i<number; i++)
    {
        if (number % i == 0)
        {
            factors[i] = i;
        }
    }
}

void Solution :: prime_factors_of_number(int number, vector<int>& factors)
{
    int count = 0;
    for (int i=1; i<number; i++)
    {
        if (factors[i] % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        
    }
}

int main()
{
    int number;
    cout << "Enter the value of the number: ";
    cin >> number;

    vector<int> factors;

    Solution Sol;
    Sol.factors_of_number(number, factors);
    
    return 0;
}