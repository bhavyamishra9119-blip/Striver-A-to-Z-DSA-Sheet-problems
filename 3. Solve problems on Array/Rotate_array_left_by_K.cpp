#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void initialising_original_array(vector<int>& original_array, int size);
    void rotating_original_array_by_k(vector<int>& original_array, int size);
    void printing_original_array(vector<int>& original_array, int size);
};

void Solution :: initialising_original_array(vector<int>& original_array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> original_array[i];
    }
}

void Solution :: rotating_original_array_by_k(vector<int>& original_array, int size)
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    k = k % size;

    vector<int> temp_array(k);

    for (int i=0; i<k; i++)
    {
        temp_array[i] = original_array[i];
    }

    for (int i=k; i<size; i++)
    {
        original_array[i-k] = original_array[i];
    }

    for (int i=0; i<k; i++)
    {
        original_array[size - k + i] = temp_array[i];
    }
}

void Solution :: printing_original_array(vector<int>& original_array, int size)
{
    cout << "The elements of the original_array are: ";

    for (int i=0; i<size; i++)
    {
        cout << original_array[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> original_array(size);

    Solution Sol;

    Sol.initialising_original_array(original_array, size);
    Sol.rotating_original_array_by_k(original_array, size);
    Sol.printing_original_array(original_array, size);
    
    return 0;
}