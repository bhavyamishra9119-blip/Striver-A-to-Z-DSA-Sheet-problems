#include <bits/stdc++.h>
using namespace std;
    
class Solution
{
    public:
    bool palindrome_no(int n, int temp)
    {
        int rev = 0;
        
        while (n>0)
        {
            int last_digit = n % 10;
            rev = rev * 10 + last_digit;
            n = n / 10;
        }
        return temp == rev;
    }
};

int main() 
{
    int Number = 1221;

    Solution Sol;
    cout << Sol.palindrome_no(Number, Number);
    return 0;
}