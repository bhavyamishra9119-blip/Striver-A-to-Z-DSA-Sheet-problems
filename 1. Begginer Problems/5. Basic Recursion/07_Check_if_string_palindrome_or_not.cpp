#include <iostream>
#include <string>
using namespace std;

class Solution 
{
    public:
    void reverse_s(string& s, int size);
    bool palindrome(string s, int size);
};

void Solution :: reverse_s(string& s, int size) 
{
    int p1 = 0;
    int p2 = size - 1;

    while (p1 < p2) 
    {
        swap(s[p1], s[p2]);
        p1++;
        p2--;
    }
}

bool Solution :: palindrome(string s, int size)
{
    string original = s;
    reverse_s(s, size); 
        
    if (original == s) 
    {
        return true;
    }
    return false;
}

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    
    Solution sol;
    if (sol.palindrome(s, s.length())) 
    {
        cout << "It is a palindrome!" << endl;
    }
    else 
    {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}