#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
    void initialising_array(int size, vector<int>& Array);
    void hashing(int size, vector<int>& Array, int* hashArray);
    void query(int size, vector<int>& Array, int* hashArray);
};

void Solution :: initialising_array(int size, vector<int>& Array)
{   
    for (int i=0; i<size; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "The elements of the Array are: ";

    for (int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: hashing(int size, vector<int>& Array, int* hashArray)
{
    for (int i=0; i<size; i++)
    {
        hashArray[Array[i]] += 1;
    }

    // cout << "The elements of the hashArray are: ";

    // for (int i=0; i<100; i++)
    // {
    //     cout << hashArray[i] << " ";
    // }
}

void Solution :: query(int size, vector<int>& Array, int* hashArray)
{
    int q;
    cout << "Enter the value of q: ";
    cin >> q;

    while (q--)
    {
    int number;
    cout << "Enter the value of number: ";
    cin >> number;

    cout << number << " comes " << hashArray[number] << " times" << endl;
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
    Sol.initialising_array(size, Array);
    cout << endl;
    Sol.hashing(size, Array, hashArray);
    cout << endl;
    Sol.query(size, Array, hashArray);

    return 0;
}