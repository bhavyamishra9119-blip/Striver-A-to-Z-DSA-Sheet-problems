#include <bits/stdc++.h>
using namespace std;

int primeNo(int x)
{
    int count = 0;

    for (int i=1; i<x+1; i++)
    {
        if (x == 1)
        {
            cout << x << " is neither prime nor composite";
            break;
        }
        if (x % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    int x = 41;
    int func = primeNo(x);

    if (func == true)
    {
        cout << x << " is not prime";
    }
    else 
    {
        cout << x << " is prime";
    }
    return 0;
}