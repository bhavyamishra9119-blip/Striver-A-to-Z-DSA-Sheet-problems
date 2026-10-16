#include <iostream>
using namespace std;

class Solution
{
    public:
    void fibonacci(int n);
};

void Solution :: fibonacci(int n)
{
    if (n == 0) 
    {
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << 0;
    }
    else 
    {
        int secondLast = 0;
        int last = 1;  

        cout << "The Fibonacci Series up to " << n << "th term: ";
        cout << secondLast << " " << last << " ";

        int current; 
        for (int i = 2; i <= n; i++) 
        {
            current = last + secondLast;   
            secondLast = last;         
            last = current;
            cout << current << " ";
        }
    }
}

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution Sol;
    Sol.fibonacci(n);

    return 0;
}