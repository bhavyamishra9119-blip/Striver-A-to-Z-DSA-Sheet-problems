#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int count_digits(int n)
    {
        int count = 0;
        
        while (n>0)
        {
            count++;
            n = n / 10;
        }
        return count;
    }
};

int main() 
{
    int N = 12045;
    int n;

    Solution Sol;
    cout << Sol.count_digits(N);

    return 0;
}