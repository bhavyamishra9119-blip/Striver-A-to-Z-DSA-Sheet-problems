#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialise_array(vector<int>& Array, int size);
    void sorting_array(vector<int>& Array, int size);
};

void Solution :: initialise_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: sorting_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    vector<int> Array;

    Solution Sol;
    
    Sol.initialise_array(Array, size);
    Sol.sorting_array(Array, size);

    return 0;
}