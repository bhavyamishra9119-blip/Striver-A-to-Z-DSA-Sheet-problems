#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void bubble_sort(vector<int>& Array, int size);
    void printing_array(const vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }
    cout << "The elements of the array are: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: bubble_sort(vector<int>& Array, int size)
{
    if (size<=0)
    {
        cout << "Invalid Input";
        return;
    }
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size-1; j++)
        {
            if (Array[j] > Array[j+1])
            {
                swap(Array[j], Array[j+1]);
            }
        }
    }
}

void Solution :: printing_array(const vector<int>& Array, int size)
{
    cout << "\nThe elements of the array are: ";
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
    Sol.bubble_sort(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}