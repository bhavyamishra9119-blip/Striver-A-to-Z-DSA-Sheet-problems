#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    void reverse_string(string& s, int length);
};

void Solution :: reverse_string(string& s, int length)
{
    // Printing original string
    cout << "Original string is: " << s;

    // Reversing and printing modified string
    cout << "\nReversed string is: ";
    for (int i=0; i<length/2; i++)
    {
        swap(s[i], s[length-i-1]);
    }
    cout << s;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int length = s.length();

    Solution Sol;
    Sol.reverse_string(s, length);
 
    return 0;
}