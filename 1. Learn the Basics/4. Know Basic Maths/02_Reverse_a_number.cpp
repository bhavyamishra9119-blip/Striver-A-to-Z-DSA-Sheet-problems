#include <bits/stdc++.h>
using namespace std;

int reverse_no(int n)
{
    int rev_no = 0;
    int last_digit;

    while (n>0)
    {
        last_digit = n % 10;
        rev_no = rev_no * 10 + last_digit;
        n = n / 10;
    }
    return rev_no;
}

int main() 
{
    int N = 12345;

    cout << reverse_no(N);
    
    return 0;
}