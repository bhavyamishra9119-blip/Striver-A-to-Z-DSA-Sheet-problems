#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the value of n here: ";
    cin >> n;

    int Array[n];
    
    for (int i=0; i<n; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "The elements of the Array is: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }

    return 0;
}