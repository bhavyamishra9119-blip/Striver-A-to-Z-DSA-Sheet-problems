#include <iostream>
using namespace std;

class Solution
{
    public:
    void reverse_number(int number);
};

void Solution :: reverse_number(int number)
{
    cout << "Original number is: " << number;
    int rev = 0;      
    while (number>0)    
    {
        int last_digit = number % 10;
        rev = rev * 10 + last_digit;
        number = number / 10;
    }
    cout << "\nReversed number is: " << rev;
}

int main() 
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    Solution Sol;
    Sol.reverse_number(number);
    
    return 0;
}