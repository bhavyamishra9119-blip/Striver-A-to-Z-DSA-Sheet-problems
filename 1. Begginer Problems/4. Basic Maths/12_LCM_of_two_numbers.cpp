#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void LCM_of_two_numbers(int num_1, int num_2);
};

void Solution :: LCM_of_two_numbers(int num_1, int num_2)
{
    int x;
    for (int i=1; i<=(num_1*num_2); i++)
    {
        for (int j=0; j<=(num_1*num_2); j++)
        {
        if (num_1*i == x && num_2*j == x)
        {
            cout << "LCM of " << num_1 << " and " << num_2 << " is: " << x;
        }
        }
    }
}

int main()
{
    int num_1; 
    cout << "Enter the first number: ";
    cin >> num_1;

    int num_2;
    cout << "Enter the second number: ";
    cin >> num_2;

    Solution Sol;
    Sol.LCM_of_two_numbers(num_1, num_2);

    return 0;
}