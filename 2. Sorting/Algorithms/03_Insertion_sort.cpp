#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void insertion_sort(vector<int>& Array, int size);
    void printing_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i  << " is: ";
        cin >> Array[i];
    }
    cout << "Elements of the array are: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: insertion_sort(vector<int>& Array, int size)
{
    int minEle = Array[0];
    for (int i=1; i<size-1; i++)
    {
        if (Array[i] < minEle)
        {
            swap(Array[i], Array[0]);
            minEle = Array[i];
        }
        if (Array[i] > minEle)
        {
            minEle = Array[i+1];
        }
    }
}

void Solution :: printing_array(vector<int>& Array, int size)
{
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
    Sol.insertion_sort(Array, size);
    Sol.printing_array(Array, size);
    
    return 0;
};