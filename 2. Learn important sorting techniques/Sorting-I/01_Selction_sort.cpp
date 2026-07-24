#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialise_array(vector<int>& Array, int n);
    void selection_sort(vector<int>& Array, int n);
};

void Solution :: initialise_array(vector<int>& Array, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Element at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "Elements of the array are: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: selection_sort(vector<int>& Array, int n)
{
    if (n == 0)
    {
        cout << "Invalid input by user";
    }

    for (int i=0; i<n; i++)
    {
        int minEle = Array[i];

        for (int j=i; j<n; j++)
        {
            if (minEle > Array[j])
            {
                minEle = Array[j];
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> Array(n);

    Solution Sol;
    
    Sol.initialise_array(Array, n);
    cout << endl;
    Sol.selection_sort(Array, n);

    return 0;
}