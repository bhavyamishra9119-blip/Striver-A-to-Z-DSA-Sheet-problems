#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<string>& Array, int size);
    void reversing_string(vector<string>& Array, int size);
    void printing_array(vector<string> Array, int size);
};

void Solution :: initialising_array(vector<string>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout <<"The element at the " << i << "th position is: ";
        cin >> Array[i];
    }
}

void Solution :: reversing_string(vector<string>& Array, int size)
{
    for (int i=0; i<size/2; i++)
    {
        swap(Array[i], Array[size-i-1]);
    }
}

void Solution :: printing_array(vector<string> Array, int size)
{
    cout << "Reversed string is: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

int main()
{
    int size;
    cout <<"Enter the size of the array: ";
    cin >> size;

    vector<string> Array(size);

    Solution Sol;
    Sol.initialising_array(Array, size);
    Sol.reversing_string(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}