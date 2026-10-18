#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void Original_array(vector<int>& Array, int size);
    void reversing_array(vector<int>& Array, int size);
    void printing_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The element at " << i << "th position is: ";
        cin >> Array[i];
    }
}

void Solution :: Original_array(vector<int>& Array, int size)
{
    cout << "Original array is: [";
    for (int i=0; i<size; i++)
    {
        if (i < (size-1))
        {
            cout << Array[i] << ",";
        }
        else
        {
            cout << Array[i] << "]";
        }
    }
}

void Solution :: reversing_array(vector<int>& Array, int size)
{
    for (int i=0; i<(size/2); i++)
    {
        swap(Array[i], Array[size-i-1]);
    }
}

void Solution :: printing_array(vector<int>& Array, int size)
{
    cout << "Reversed array is: ";
    for (int i=0; i<size; i++)
    {
        if (i < (size-1))
        {
        cout << Array[i] << ",";
        }
        else
        {
            cout << Array[i] << "]";
        }
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
    Sol.Original_array(Array, size);
    cout << endl;
    Sol.reversing_array(Array, size);
    Sol.printing_array(Array, size);

    return 0;
}        