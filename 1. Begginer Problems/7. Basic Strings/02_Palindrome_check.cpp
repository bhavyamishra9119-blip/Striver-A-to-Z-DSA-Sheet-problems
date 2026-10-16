#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void initialising_array(vector<string>& Array, vector<string>& reversedArray, int size);
    void palindrome_check(vector<string>& Array, vector<string>& reversedArray, int size);
};

void Solution :: initialising_array(vector<string>& Array, vector<string>& reversedArray, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << "The element at the " << i << "th position is: ";
        cin >> Array[i];
    }
}

void Solution :: palindrome_check(vector<string>& Array, vector<string>& reversedArray, int size)
{
    for (int i=0; i<size; i++)
    {
        reversedArray[i] = Array[size-i-1];
    }
    if (reversedArray == Array)
    {
        cout << "The string is palidrome";
    }
    else
    {
        cout << "The string is not palindrome";
    }
}

int main()
{
    int size;
    cout <<"Enter the size of the array: ";
    cin >> size;

    vector<string> Array(size);
    vector<string> reversedArray(size);

    Solution Sol;
    
    Sol.initialising_array(Array, reversedArray, size);
    Sol.palindrome_check(Array, reversedArray, size);

    return 0;
}