#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool Armstrong_no(int n, int k, int N)
    {
        int digit;
        int sum = 0;

        while (n>0)
        {
            digit = n % 10;
            sum += pow(digit, k);
            n = n / 10;
        }
        return (sum == N);
    }
};

int main() 
{
    int N = 153;
    int k = to_string(N).length();

    Solution Sol;
    cout << Sol.Armstrong_no(N, k, N);
    return 0;
}