#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void rotating_array_by_1(vector<int>& Array, int size);
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

void Solution :: rotating_array_by_1(vector<int>& Array, int size)
{
    int temp = Array[0];

    for (int i=0; i<size-1; i++)
    {
        Array[i] = Array[i+1];
    }
    Array[size-1] = temp;
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
    Sol.rotating_array_by_1(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}