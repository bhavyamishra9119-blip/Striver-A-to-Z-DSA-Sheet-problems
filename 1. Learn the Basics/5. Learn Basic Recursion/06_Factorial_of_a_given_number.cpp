#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int factorial(int n, int new_no, int k)
    {
        if (k > n)
        {
            return new_no;
        }
        return factorial(n, new_no *= k, k+1);
    }
};

int main() {
    int number = 5;
     
    Solution Sol;

    int x = Sol.factorial(number, 1, 1);

    cout << x;
    return 0;
}