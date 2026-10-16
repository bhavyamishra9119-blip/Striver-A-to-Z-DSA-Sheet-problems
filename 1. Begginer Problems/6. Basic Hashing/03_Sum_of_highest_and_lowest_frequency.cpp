#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int* hashArray, int size);
    void hashing_array(vector<int>& Array, int* hashArray, int size);   
    void sum_of_highest_and_lowest_frequency(vector<int>& Array, int* hashArray, int size);   
};

void Solution :: initialising_array(vector<int>& Array, int* hashArray, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The element at " << i << "the position is: ";
        cin >> Array[i];
    }
}

void Solution :: hashing_array(vector<int>& Array, int* hashArray ,int size)
{
    for (int i=0; i<size; i++)
    {
        hashArray[Array[i]] += 1;
    }
}

void Solution :: sum_of_highest_and_lowest_frequency(vector<int>& Array, int* hashArray, int size)
{
    for (int i=0; i<100; i++)
    {
        
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);
    int hashArray[100] = {0};

    Solution Sol;
    Sol.initialising_array(Array, hashArray, size);
    Sol.initialising_array(Array, hashArray, size);
    
    return 0;
}