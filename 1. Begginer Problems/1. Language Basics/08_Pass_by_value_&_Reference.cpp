#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void originalArray(vector<int> Array)
    {
        for (int i = 0; i < Array.size(); i++)
        {
            cout << Array[i] << " ";
        }
    }
    void reverse(vector<int>& Array)
    {      
        cout << "Reversed Array is: ";
        for (int i = Array.size() - 1; i > -1; i--)
        {
            cout << Array[i] << " ";
        }
    }
};

int main() {
    vector<int> Array = {1,2,3,4,5,6};

    Solution Sol;

    cout << "Original Array is: ";
    Sol.originalArray(Array);
    cout << endl;

    Sol.reverse(Array);
    
    return 0;
}