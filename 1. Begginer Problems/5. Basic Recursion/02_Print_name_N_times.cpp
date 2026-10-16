#include <iostream>
using namespace std;

class Solution
{
    public:
    void name_N_times(string name, int count, int K);
};

void Solution :: name_N_times(string name, int count, int K)
{
    if (count == K)
    {
        return;
    }
    cout << name << endl;
    name_N_times(name, count + 1, K);
}

int main() 
{
    string name;
    cout << "Enter the name: ";
    getline(cin, name);

    int K;
    cout << "Enter the value of K: ";
    cin >> K;

    Solution Sol;

    Sol.name_N_times(name, 1, K);

    return 0;
}