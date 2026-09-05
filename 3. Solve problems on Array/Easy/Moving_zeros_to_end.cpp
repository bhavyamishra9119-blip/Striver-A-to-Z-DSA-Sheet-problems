#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void moving_zeros_to_end_of_array(vector<int>& Array, vector<int> tempArray, int size);
    void printing_array(vector<int>& Array, vector<int> tempArray, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Enter the element present at " << i << ": ";
        cin >> Array[i];
    }
}

void Solution::moving_zeros_to_end_of_array(vector<int>& Array, vector<int> tempArray, int size) 
{
    int index = 0;
    for (int i = 0; i < size; i++) 
    {
        if (Array[i] != 0) 
        {
            swap(Array[i], Array[index++]);
        }
    }
}

void Solution :: printing_array(vector<int>& Array, vector<int> tempArray, int size)
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
    vector<int> tempArray(size);

    Solution Sol;

    Sol.initialising_array(Array, size);
    Sol.moving_zeros_to_end_of_array(Array, tempArray, size);
    Sol.printing_array(Array, tempArray, size);
    return 0;
}