#include <iostream>
using namespace std;

class Solution
{
    public:
    void anagram(string ori_s, string dup_s, int size);
};

void Solution :: anagram(string ori_s, string dup_s, int size)
{
    for (int i=0; i<size; i++)
    {
        if (ori_s[i] == dup_s[i])
        {
            
        }
    }
}

int main()
{
    string ori_s;
    cout << "Enter the original string: ";
    getline(cin, ori_s);

    string dup_s;
    cout << "Enter the duplicate string: ";
    getline(cin, dup_s);

    int size = ori_s.length();
    return 0;
}