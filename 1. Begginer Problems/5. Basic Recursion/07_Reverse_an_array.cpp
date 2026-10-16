#include <iostream>
#include <vector>
using namespace std; 

class Solution 
{
    public:
    void initialising_array(vector<int>&Array, int size);
    void original_array(vector<int> Array, int size);
    void reversed_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>&Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: original_array(vector<int> Array, int size)
{
    cout << "Original array is: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: reversed_array(vector<int>& Array, int size)
{
    int p1 = 0;
    int p2 = size - 1;

    while (p1 < p2)
    {
        swap(Array[p1], Array[p2]);
        p1++;
        p2--;
    }

    cout << "Reversed array is: ";

    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

int main() 
{
    Solution Sol;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);


    Sol.initialising_array(Array, size);
    Sol.original_array(Array, size);
    Sol.reversed_array(Array, size);

    for (int num : Array)
    {
        cout << num << " ";
    }

    return 0;
}