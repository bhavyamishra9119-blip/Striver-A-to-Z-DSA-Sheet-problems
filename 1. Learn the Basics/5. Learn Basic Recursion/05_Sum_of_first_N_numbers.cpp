#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int sum_N_nos(int n, int count, int sum)
    {
        if (count > n)
        {
            return sum;
        }
        return sum_N_nos(n, count + 1, sum += count);
    }
};
 
int main() {
    int n = 5;

    Solution Sol;
    cout << Sol.sum_N_nos(n, 1, 0);
    return 0;
}