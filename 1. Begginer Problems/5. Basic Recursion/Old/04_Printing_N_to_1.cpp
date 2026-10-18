#include <iostream>
using namespace std;

class Solution
{
    public:
    void printing_to_1(int n, int count);
};

void Solution :: printing_to_1(int n, int count)
{
    // Printing from N to 1
    if (count == 0)
    {
        return;
    }
    cout << count << " ";
    printing_to_1(n, count - 1);
}

int main() 
{
    int n = 11;

    Solution Sol;

    Sol.printing_to_1(n, n);
    return 0;
}