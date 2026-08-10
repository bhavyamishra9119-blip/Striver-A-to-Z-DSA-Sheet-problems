#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void selection_sort(vector<int>& Array, int size);
    void printing_array(vector<int> Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "Elements of the array are: ";

    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: selection_sort(vector<int>& Array, int size)
{
    int minEle = Array[0];

    if (size == 0)
    {
        cout << "Invalid input by user";
    }
    for (int i=0; i<size; i++)
    {
        
    }
}

void Solution :: printing_array(vector<int> Array, int size)
{

}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;
    
    Sol.initialising_array(Array, size);
    cout << endl;
    Sol.selection_sort(Array, size);

    return 0;
}