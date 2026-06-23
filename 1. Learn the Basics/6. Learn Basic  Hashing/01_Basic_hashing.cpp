#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising(int n, int* Array);
    void hashing(int n, int* Array, int* hashArray);
    void query(int n, int* Array, int* hashArray);
};

void Solution :: initialising(int n, int* Array)
{   
    for (int i=0; i<n; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "The elements of the Array are: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: hashing(int n, int* Array, int* hashArray)
{
    for (int i=0; i<n; i++)
    {
        hashArray[Array[i]] += 1;
    }

    cout << "The elements of the hashArray are: ";

    for (int i=0; i<100; i++)
    {
        cout << hashArray[i] << " ";
    }
}

void Solution :: query(int n, int* Array, int* hashArray)
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
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int Array[n];
    int hashArray[100] = {0};
    
    Solution Sol;
    Sol.initialising(n, Array);
    cout << endl;
    Sol.hashing(n, Array, hashArray);
    cout << endl;
    Sol.query(n, Array, hashArray);

    return 0;
}