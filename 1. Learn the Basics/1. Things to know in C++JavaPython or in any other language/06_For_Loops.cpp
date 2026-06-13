#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void forLoop(int low, int high) 
    {
        int sum = 0;
        for (int i=low; i<=high; i++)
        {
            sum = sum+i;
        }
        cout << sum;
    }
};

int main() {

    int low, high;

    cout << "Enter the value of low here: ";
    cin >> low;

    cout << "Enter the value of high here: ";
    cin >> high;

    Solution Sol;
    Sol.forLoop(low, high);
    
    return 0;
}