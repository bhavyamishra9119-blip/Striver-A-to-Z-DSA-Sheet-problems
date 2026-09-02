#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void arranging_zeros_at_last(vector<int>& Array, int size);
    void printing_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: arranging_zeros_at_last(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {

    }
}

void Solution :: printing_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

int main()
{
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;
    
    vector<int> Array(size);

    Solution Sol;

    Sol.initialising_array(Array,size);
    return 0;
}