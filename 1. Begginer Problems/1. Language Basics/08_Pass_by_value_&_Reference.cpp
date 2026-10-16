#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void original_array(vector<int> Array);
    void reversed_array(vector<int>& Array);
};

void Solution :: original_array(vector<int> Array)
{
    for (int i = 0; i < Array.size(); i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: reversed_array(vector<int>& Array)
{      
    cout << "Reversed_arrayd Array is: ";
    for (int i = Array.size() - 1; i > -1; i--)
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

    cout << "Original Array is: ";

    Solution Sol;
    Sol.original_array(Array);
    cout << endl;
    Sol.reversed_array(Array);
    
    return 0;
}