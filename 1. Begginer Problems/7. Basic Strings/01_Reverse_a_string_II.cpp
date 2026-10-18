#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
    public:
    void reversing_string(string& s, int size);
    void printing_string(const string& s, int size);
};

void Solution :: reversing_string(string& s, int size)
{
    // Printing original string
    cout << "Original string is: [";
    for (int i=0; i<size; i++)
    {
        if (i<(size-1))
        {
        cout << "\"" <<s[i] << "\",";
        }
        else 
        {
            cout << "\"" <<s[i] << "\"]";
        }
    }
    // Reversing string
    for (int i=0; i<size/2; i++)
    {
        swap(s[i], s[size-i-1]);
    }
}

void Solution :: printing_string(const string& s, int size)
{
    // Printing revresed string
    cout << "\nReversed string is: [";
    for (int i=0; i<size; i++)
    {
        if (i<(size-1))
        {
        cout << "\"" <<s[i] << "\",";
        }
        else 
        {
            cout << "\"" <<s[i] << "\"]";
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int size = s.length();
    
    Solution Sol;
    Sol.reversing_string(s, size);
    Sol.printing_string(s, size);

    return 0;
}