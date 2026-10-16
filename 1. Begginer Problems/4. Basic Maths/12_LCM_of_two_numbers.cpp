#include <iostream>
using namespace std;

class Solution
{
    public:
    void LCM_of_two_numbers(int num_1, int num_2);
};

void Solution :: LCM_of_two_numbers(int num_1, int num_2)
{
    int x = 0;
    for (int i=1; i<=(num_1*num_2); i++)
    {
        for (int j=1; j<=(num_1*num_2); j++)
        {
        if (num_1*i == num_2*j)
        {
            cout << "LCM of " << num_1 << " and " << num_2 << " is: " << num_2*j;
            return;
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