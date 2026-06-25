#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void initialise(int* Array, int n);
    void counting_frequency(int* Array, int n);
};

void Solution :: initialise(int* Array, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }

    cout << "Elements of the array are: ";

    for (int i=0; i<n; i++)
    {
        cout << Array[i] << " ";
    }
}

void Solution :: counting_frequency(int* Array, int n)
{
    int number; 
    cout << "Enter the number: ";
    cin >> number;

    int count = 0;

    for (int i=0; i<n; i++)
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
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int Array[n];
    
    Solution Sol;

    Sol.initialise(Array, n);
    cout << endl;
    Sol.counting_frequency(Array, n);
    return 0;
}