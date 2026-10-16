#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void sum_of_elements_of_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The value of the " << i << "th element of the array is: ";
        cin >> Array[i];
    }
}

void Solution :: sum_of_elements_of_array(vector<int>& Array, int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
    {
        sum += Array[i];
    }
    cout << "The sum of the array is: " << sum; 
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;
    Sol.initialising_array(Array, size);
    Sol.sum_of_elements_of_array(Array, size);

    return 0;
}