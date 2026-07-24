#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialise(vector<int>& Array, int n);
    void highest_occuring_element(vector<int>& Array, int n);
};

void Solution :: initialise(vector<int>& Array, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "Elments of the Arrray are: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: highest_occuring_element(vector<int>& Array, int n)
{
    
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> Array(n);

    Solution Sol;

    Sol.initialise(Array, n);
    cout << endl;
    Sol.highest_occuring_element(Array, n);

    return 0;
}