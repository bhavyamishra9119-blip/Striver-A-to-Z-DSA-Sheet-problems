#include <iostream>
using namespace std;
    
class Solution
{
    public:
    void palindrome_number(int n, int number);
};

void Solution :: palindrome_number(int n, int number)
{
    int rev = 0;
    while (n>0)
    {
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    if (rev == number)
    {
        cout << number << " is palindrome";
    }
    else
    {
        cout << number << " is not palindrome";
    }
}

int main() 
{
    int number; 
    cout << "Enter the number: ";
    cin >> number;

    Solution Sol;
    Sol.palindrome_number(number, number);
    
    return 0;
}