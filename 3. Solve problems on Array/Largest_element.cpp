#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void largestElement(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}
void Solution :: largestElement(const vector<int>& Array, int size)
{
    int maxEle = Array[0];
        
    for (int i=0; i<size; i++)
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
    int size;
    cout << "Enter the value of size: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;
    Sol.initialising_array(Array, size);
    Sol.largestElement(Array, size);
    return 0;
}