#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void factorial(int n)
    {
        int new_no = 1;

        for (int i=n; i>=1; i--)
        {
            new_no *= i;
        }
        cout << new_no;
    }
};

int main() {
    int number = 5;
     
    Solution Sol;

    Sol.factorial(number);
    return 0;
}