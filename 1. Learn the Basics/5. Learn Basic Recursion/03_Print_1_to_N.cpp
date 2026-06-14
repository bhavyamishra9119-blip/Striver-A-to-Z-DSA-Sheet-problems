#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void print_To_N(int n, int count)
    {
        if (count > n)
        {
            return;
        }
        cout << count << " ";
        print_To_N(n, count + 1);
    }
};

int main() 
{
    int n = 11;

    Solution Sol;

    Sol.print_To_N(n, 1);
    return 0;
}