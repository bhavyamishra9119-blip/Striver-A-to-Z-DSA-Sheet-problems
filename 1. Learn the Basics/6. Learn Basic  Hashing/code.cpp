#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialising(int n, int* Array);
    void hashing(int n, int* Array);
};

void Solution :: initialising(int n, int* Array)
{   
    for (int i=0; i<n; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "The elements of the Array is: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: hashing(int n, int* Array)
{
    int hashArray[100] = {0};

    for (int i=0; i<n; i++)
    {
        hashArray[Array[i]] += 1;
    }

    cout << "The elements of the hashArray is: ";
}

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int Array[n];
    
    Solution Sol;
    Sol.initialising(n, Array);
    cout << endl;
    Sol.hashing(n, Array);

    return 0;
}