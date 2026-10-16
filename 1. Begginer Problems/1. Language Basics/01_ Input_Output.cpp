#include <iostream>
using namespace std;

class Solution 
{
    public:
    void printNumber();
};

void Solution :: printNumber()
{
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << x;
}


int main()
{
    Solution Sol;
    Sol.printNumber();
    
    return 0;
}