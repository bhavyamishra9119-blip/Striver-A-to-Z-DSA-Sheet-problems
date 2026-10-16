#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array_1, vector<int>& Array_2, int size_1, int size_2);
    void sorting_array(vector<int>& Array_1, vector<int>& Array_2, int size_1, int size_2);
    void union_of_two_sorted_arrays(vector<int>& Array_1, vector<int>& Array_2, vector<int>& Array, int size_1, int size_2);
    void removing_duplicates_from_array(vector<int>& Array, int& size);
    void printing_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array_1, vector<int>& Array_2, int size_1, int size_2)
{
    for (int i=0; i<size_1; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array_1[i];
    }
    
    for (int i=0; i<size_2; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array_2[i];
    }
}

void Solution :: sorting_array(vector<int>& Array_1, vector<int>& Array_2, int size_1, int size_2)
{
    for (int i=0; i<size_1-1; i++)
    {
        int minIndex = i;
        for (int j=i+1; j<size_1; j++)
        {
            if (Array_1[minIndex] > Array_1[j])
            {
                minIndex = j;
            }
        }
        swap(Array_1[i], Array_1[minIndex]);
    }
    
    for (int i=0; i<size_2-1; i++)
    {
        int minIndex = i;
        for (int j=i+1; j<size_2; j++)
        {
            if (Array_2[minIndex] > Array_2[j])
            {
                minIndex = j;
            }
        }
        swap(Array_2[i], Array_2[minIndex]);
    }   
}

void Solution :: union_of_two_sorted_arrays(vector<int>& Array_1, vector<int>& Array_2, vector<int>& Array, int size_1, int size_2)
{
    int index = 0;
    for (int i = 0; i < size_1; i++)
    {
        Array[index++] = Array_1[i];
    }
    for (int i = 0; i < size_2; i++)
    {
        Array[index++] = Array_2[i];
    }
}

void Solution :: removing_duplicates_from_array(vector<int>& Array, int& size)
{
    if (size == 0)
    {
        return;
    }

    sort(Array.begin(), Array.end());

    int uniqueIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (Array[i] != Array[i + 1])
        {
            Array[uniqueIndex++] = Array[i];
        }
    }
    Array[uniqueIndex++] = Array[size - 1]; 
    size = uniqueIndex; 
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
    int size_1;
    cout << "Enter the size of the 1st Array: ";
    cin >> size_1;
    
    int size_2;
    cout << "Enter the size of the 2nd Array: ";
    cin >> size_2;

    int size = size_1 + size_2;

    vector<int> Array_1(size_1);
    vector<int> Array_2(size_2);
    vector<int> Array(size);

    Solution Sol;

    Sol.initialising_array(Array_1, Array_2, size_1, size_2);
    Sol.sorting_array(Array_1, Array_2, size_1, size_2);
    Sol.union_of_two_sorted_arrays(Array_1, Array_2, Array, size_1, size_2);
    Sol.removing_duplicates_from_array(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}