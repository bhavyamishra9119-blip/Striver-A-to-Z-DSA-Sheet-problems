#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void factor_n1(int n1);
    void factor_n2(int n2);
    int GCD(int n1, int n2);
};
void Solution :: factor_n1(int n1)
{
    cout << "factors of n1 are: ";

    for (int i=1; i<n1+1; i++)
    {
        if (n1 % i == 0)
        {
            cout << i << " ";
        }
    }
}

void Solution :: factor_n2(int n2)
{
    cout << "factors of n2 are: ";

    for (int i=1; i<n2+1; i++)
    {
        if (n2 % i == 0)
        {
            cout << i << " ";
        }
    }
}

int Solution :: GCD(int n1, int n2)
{
    cout << "GCD of " << n1 << " and " << n2 << " is ";

    int gcd = 1;

    for (int i=1; i<=min(n1,n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main() 
{
    int n1  = 12;
    int n2 = 24;

    Solution Sol;

    Sol.factor_n1(n1);
    cout << endl;

    Sol.factor_n2(n2);
    cout << endl;

    cout << Sol.GCD(n1, n2);

    return 0;
}