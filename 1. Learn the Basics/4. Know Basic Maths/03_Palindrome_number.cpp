#include <bits/stdc++.h>
using namespace std;
    
bool palindrome_no(int Number, int n)
{
    int rev_no = 0;
    int last_digit;

    while (n>0)
    {
        last_digit = n % 10;
        rev_no = rev_no * 10 + last_digit;
        n = n / 10; 
    }
    
    if (Number == rev_no)
    {
        return true;
    }
    return false;
}

int main() 
{
    int Number = 1221;

    cout << palindrome_no(Number, Number);
    return 0;
}