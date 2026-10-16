#include <iostream>
using namespace std;

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    for (int i=1; i<5; i++)
    {
        cout << endl;

        for (int j = 1; j<6; j++)
        {
            cout << s << " ";
        }
    }
    return 0;
}