#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void factor(int n)
    {
        cout << "factors of " << n << " are: ";

        for (int i=1; i<n+1; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
    }
};

int main() 
{
    int x = 24;

    Solution Sol;
    
    Sol.factor(x);

    return 0;
}