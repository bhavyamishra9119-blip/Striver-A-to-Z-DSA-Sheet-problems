#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void checking_array_sorted_or_not(const vector<int>& Array, int size);
    void printing_array(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    // Initialising array
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: checking_array_sorted_or_not(const vector<int>& Array, int size)
{
    // Checking whether the array is sorted or not
    bool is_increasing = true;
    bool is_decreasing = true;

    for (int i=0; i<size-1; i++)
    {
        if (Array[i] < Array[i+1])
        {
            is_decreasing = false;
        }
    }

    for (int i=0; i<size-1; i++)
    {
        if (Array[i] > Array[i+1])
        {
            is_increasing = false;
        }
    }

    if (is_increasing || is_decreasing)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}

void Solution :: printing_array(const vector<int>& Array, int size)
{
    // Printing array
    cout << "\nElements of the array are: ";
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
    Sol.initialising_array(Array, size);
    Sol.checking_array_sorted_or_not(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}