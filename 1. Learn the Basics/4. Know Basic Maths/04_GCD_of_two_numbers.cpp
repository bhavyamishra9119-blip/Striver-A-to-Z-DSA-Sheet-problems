#include <bits/stdc++.h>
using namespace std;

void factor_n1(int n1)
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

void factor_n2(int n2)
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

int GCD(int n1, int n2)
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

    factor_n1(n1);
    cout << endl;

    factor_n2(n2);
    cout << endl;

    cout << GCD(n1, n2);

    return 0;
}