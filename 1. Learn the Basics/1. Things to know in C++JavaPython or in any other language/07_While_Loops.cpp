#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int whileLoop(int d) 
    {
        int sum = 0;
        int count = 0;
        int num = d;
        
        while(count < 50)
        {
            sum += num;
            num += 10;
            count++;
        }
        return sum;
    }
};

int main() {
    int d;

    cout << "Enter the value of d here: ";
    cin >> d;

    Solution Sol;
    cout << Sol.whileLoop(d);

    return 0;
}