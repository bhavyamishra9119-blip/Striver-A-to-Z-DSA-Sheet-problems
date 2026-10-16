#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void printing_array(const vector<int>& Array, int size);
    void counting_frequency(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: printing_array(const vector<int>& Array, int size)
{
    cout << "Elements of the array are: ";

    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: counting_frequency(vector<int>& Array, int size)
{
    int number; 
    cout << "Enter the number: ";
    cin >> number;

    int count = 0;

    for (int i=0; i<size; i++)
    {
        if (number == Array[i])
        {
            count++;
        }
    }
    cout << number << " appear " << count << " times";
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    vector<int> Array(size);
    
    Solution Sol;

    Sol.initialising_array(Array, size);
    Sol.printing_array(Array, size);
    cout << endl;
    Sol.counting_frequency(Array, size);
    
    return 0;
}