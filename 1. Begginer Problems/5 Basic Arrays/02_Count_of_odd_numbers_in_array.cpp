#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<int>& Array, int size);
    void count_of_odd_numbers_in_array(vector<int>& Array, int size);
};

void Solution :: initialising_array(vector<int>& Array, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The value of the " << i << "th element is: ";
        cin >> Array[i];
    }
}

void Solution :: count_of_odd_numbers_in_array(vector<int>& Array, int size)
{
    int count = 0;
    for (int i=0; i<size; i++)
    {
        if (Array[i] % 2 != 0)
        {
            count++;
        }
    }
    cout <<"There are " << count << " odd elements in the array";
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> Array(size);

    Solution Sol;
    Sol.initialising_array(Array, size);
    Sol.count_of_odd_numbers_in_array(Array, size);
    return 0;
}