#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void reversing_array(vector<int>& Array, int size);
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

void Solution :: reversing_array(vector<int>& Array, int size)
{
    // Printing original array
    cout << "Original array is: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }

    // Reversing elements of array
    for (int i=0; i<size/2; i++)
    {
        swap(Array[i], Array[size-i-1]);
    }
}

void Solution :: printing_array(const vector<int>& Array, int size)
{
    // Printing reversed array
    cout << "\nReversed array is: ";
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
    Sol.reversing_array(Array, size);
    Sol.printing_array(Array, size);
    return 0;
}