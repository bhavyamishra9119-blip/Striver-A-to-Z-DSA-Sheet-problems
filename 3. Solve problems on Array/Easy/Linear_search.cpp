#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void linear_search(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: linear_search(vector<int>& Array, int size)
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    for (int i=0; i<size; i++)
    {
        if (Array[i] == number)
        {
            cout << i;
            return;
        }
    }
    cout << "-1";
}

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;

    Sol.initialising_array(Array, size);
    Sol.linear_search(Array, size);
    return 0;
}