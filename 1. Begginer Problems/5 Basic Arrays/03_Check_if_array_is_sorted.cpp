#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void sorting_array(vector<int>& Array, int size, bool& is_sorted_increasing, bool& is_sorted_decreasing);
    void checking_array(vector<int>& Array, int size, bool& is_sorted_increasing, bool& is_sorted_decreasing);
    void printing_array(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: sorting_array(vector<int>& Array, int size, bool& is_sorted_increasing, bool& is_sorted_decreasing)
{
    is_sorted_increasing = true;
    is_sorted_decreasing = true;

    for (int i=0; i<size-1; i++)
    
    {
        if (Array[i] < Array[i+1])
        {
            is_sorted_decreasing = false;
        }
        else if (Array[i] > Array[i+1]) 
        {
            is_sorted_increasing = false;
        }
    }
}

void Solution :: checking_array(vector<int>& Array, int size, bool& is_sorted_increasing, bool& is_sorted_decreasing)
{
    if (is_sorted_increasing)
    {
        cout << "Array is sorted in increasing oreder";
    }
    else if (is_sorted_decreasing)
    {
        cout << "Array is sorted in decreasing order";
    }
    else 
    {
        cout << "Array is not sorted";
    }
}

void Solution :: printing_array(const vector<int>& Array, int size)
{
    cout << "The elements of the array are: ";

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
    bool is_sorted_increasing = false;
    bool is_sorted_decreasing = false;

    Solution Sol;

    Sol.initialising_array(Array, size);
    Sol.sorting_array(Array, size, is_sorted_increasing, is_sorted_decreasing);
    Sol.checking_array(Array, size, is_sorted_increasing, is_sorted_decreasing);
    cout << endl;
    Sol.printing_array(Array, size);
    
    return 0;
}