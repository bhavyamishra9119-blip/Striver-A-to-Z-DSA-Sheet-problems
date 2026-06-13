#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int count = 0;

    while (n>0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int main() 
{
    int N = 12045;
    int n;

    cout << count_digits(N);
    
    
    return 0;
}