#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void sorting_array(vector<int>& Array, int size);
    void printing_array(const vector<int>& Array, int size);
    void second_largest(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: sorting_array(vector<int>& Array, int size)
{
    for (int i=0; i<size-1; i++)
    {
        int minIndex = i;
        for (int j=i+1; j<size; j++)
        {
            if (Array[minIndex] > Array[j])
            {
                minIndex = j;
            }
        }
        swap(Array[i], Array[minIndex]);
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

void Solution :: second_largest(const vector<int>& Array, int size)
{
    if (size<2)
    {
        cout << "The second largest element of the array is: "<< Array[size-2];
    }
        cout << "Array should contain at least 3 elements";
}


int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;

    Sol.initialising_array(Array, size);
    Sol.sorting_array(Array, size);
    Sol.printing_array(Array, size);
    Sol.second_largest(Array, size);

    return 0;
}