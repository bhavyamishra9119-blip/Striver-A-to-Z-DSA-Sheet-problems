#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialise(vector<int>& Array, int n);
    void largestElement(vector<int>& Array, int n);
};

void Solution :: initialise(vector<int>& Array, int n)
{
    for (int i=0; i<Array.size(); i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}
void Solution :: largestElement(vector<int>& Array, int n)
{
    int maxEle = Array[0];
        
    for (int i=0; i<Array.size(); i++)
    {
        if (maxEle < Array[i])
        {
            maxEle = Array[i];
        }
    }
    cout << "The largest element of the array is: " << maxEle;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> Array(n);

    Solution Sol;
    Sol.initialise(Array, n);
    Sol.largestElement(Array, n);
    return 0;
}