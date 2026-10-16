#include <iostream>
using namespace std;

class Solution
{
    public:
    void count_digits(int number, int n);
};

void Solution :: count_digits(int number, int n)
{
    int count = 0;
    while (n>0)
    {
        count++;
        n = n / 10;
    }
    cout << number << " is a " << count << "-digit number";
}

int main() 
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    Solution Sol;
    Sol.count_digits(number, number);

    return 0;
}