#include <bits/stdc++.h>
using namespace std;

void N_time(string x, int count, int K)
{
    if (count == K)
    {
        return;
    }

    cout << x << endl;
    N_time(x, count + 1, K);
}

int main() 
{
    string x = "Horse";
    int K = 5;

    N_time(x, 0, K);

    return 0;
}
