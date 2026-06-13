#include <bits/stdc++.h>
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

int main() {
    string name = "Adam";
    int K = 5;

    Solution Sol;

    Sol.name_N_times(name, 1, K);

    return 0;
}