#include <bits/stdc++.h>
using namespace std;

void name_N_times(string name, int count, int K)
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

    name_N_times(name, 1, K);

    return 0;
}