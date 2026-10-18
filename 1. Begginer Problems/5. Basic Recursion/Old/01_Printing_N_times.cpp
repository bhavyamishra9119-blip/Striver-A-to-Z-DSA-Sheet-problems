#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    void N_time(string s, int count, int K);
};

void Solution :: N_time(string s, int count, int K)
{
    // Printing string N times
    if (count == K)
    {
        return;
    }
    cout << s << endl;
    N_time(s, count + 1, K);
}

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int K;
    cout << "Enter the value of K: ";
    cin >> K;

    Solution Sol;
   Sol.N_time(s, 0, K);

    return 0;
}
