#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int reverse_no(int n)
    {
        int rev = 0;
        
        while (n>0)
        {
            int last_digit = n % 10;
            rev = rev * 10 + last_digit;
            n = n / 10;
        }
        return rev;
    }
};

int main() 
{
    int N = 12345;

    Solution Sol;
    cout << Sol.reverse_no(N);
    
    return 0;
}