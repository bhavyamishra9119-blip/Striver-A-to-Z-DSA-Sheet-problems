#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void sorting_array(vector<int>& Array, int size);
    int removing_duplicates(vector<int>& Array, int size);
    void printing_array(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element at " << i << " is: ";
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
            if (Array[j] < Array[minIndex])
            {
                minIndex = j;
            }
        }
        swap(Array[i], Array[minIndex]);
    }
}

int Solution :: removing_duplicates(vector<int>& Array, int size)
{
    int i=0;
    for (int j=1; j<size; j++)
    {
        if (Array[i] != Array[j])
        {
            i++;
            Array[i] = Array[j];
        }
    }
    return i+1;
}

void Solution :: printing_array(const vector<int>& Array, int size)
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
    
    Sol.initialising_array(Array, size);
    Sol.sorting_array(Array, size);

    cout << "Array with duplicates: ";

    Sol.printing_array(Array, size);

    cout << endl;

    int newSize = Sol.removing_duplicates(Array, size);

    cout << "Array without duplicates: ";

    Sol.printing_array(Array, newSize);

    return 0;
}