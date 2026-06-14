#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void print_To_N(int n, int count)
    {
        if (count == 0)
        {
            return;
        }
        cout << count << " ";
        print_To_N(n, count - 1);
    }
};

int main() 
{
    int n = 11;

    Solution Sol;

    Sol.print_To_N(n, n);
    return 0;
}