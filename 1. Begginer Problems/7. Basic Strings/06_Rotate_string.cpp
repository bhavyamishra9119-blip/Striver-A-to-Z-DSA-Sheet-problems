#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void reversing_string(string& s, int size);
    void printing_string(const string& s, int size);
};

void Solution :: reversing_string(string& s, int size)
{
    cout << "Original string is: " << s;
    for (int i=0; i<size/2; i++)
    {
        swap(s[i], s[size-i-1]);
    }
}

void Solution :: printing_string(const string& s, int size)
{
    cout << "\nReversed string is: " << s;
}

int main()
{
    string s;
    cout <<"Enter the string: ";
    getline(cin, s);

    int size = s.length();

    Solution Sol;
    Sol.reversing_string(s, size);
    Sol.printing_string(s, size);

    return 0;
}