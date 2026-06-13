#include <bits/stdc++.h>
using namespace std;

void factor(int x)
{
    cout << "factors of " << x << " are ";

    for (int i=1; i<x+1; i++)
    {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main() 
{
    int x = 24;

    factor(x);

    return 0;
}