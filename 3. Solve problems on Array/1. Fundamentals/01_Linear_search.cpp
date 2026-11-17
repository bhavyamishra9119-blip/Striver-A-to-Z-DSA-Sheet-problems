#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void printing_array(const vector<int>& Array,int size);
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

void Solution :: printing_array(const vector<int>& Array,int size)
{
    cout << "Element of the array are: ";
    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
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
            cout << number << " is present at " << i << " th index in the array";
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
    Sol.printing_array(Array, size);
    cout << endl;
    Sol.linear_search(Array, size);
    return 0;
}
