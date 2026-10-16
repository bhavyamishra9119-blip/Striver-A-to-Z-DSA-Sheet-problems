#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void highest_occuring_element(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "Element present at " << i << " is: ";
        cin >> Array[i];
    }
}

void Solution :: highest_occuring_element(vector<int>& Array, int size)
{
    int count = 0;
    for (int i=0; i<size; i++)
    {
        for (int j=i; j<size; j++)
        {
            if (Array[i] == Array[j])
            {
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int size;
    cout << "Enter the value of n: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;
    Sol.initialising_array(Array, size);
    Sol.highest_occuring_element(Array, size);

    return 0;
}