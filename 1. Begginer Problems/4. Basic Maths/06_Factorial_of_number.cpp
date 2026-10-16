#include <iostream>
using namespace std;

class Solution
{
    public:
    void factorial_of_number(int number);
};

void Solution :: factorial_of_number(int number)
{
    int factorial = 1;
    while(number>0)
    {
        factorial *= number;
        number--;
    }
    cout << "The factorial of " << number << " is: " << factorial;
    if (number <= 0)
    {
        cout << "Invalid input";
    }
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    Solution Sol;
    Sol.factorial_of_number(number);

    return 0;
}