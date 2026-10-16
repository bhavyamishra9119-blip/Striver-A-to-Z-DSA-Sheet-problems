#include <iostream>
using namespace std;

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int no_of_times;
    cout << "Enter the vlaue of how many times you want to run: ";
    cin >> no_of_times;

    for (int i=0; i<no_of_times; i++)
    {
        cout << endl;

        for (int j=0; j<i+1; j++)
        {
            cout << s << " ";
        }
    }
    return 0;
}