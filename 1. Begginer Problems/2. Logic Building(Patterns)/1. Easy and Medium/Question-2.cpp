#include <iostream>
using namespace std;

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    for (int i=0; i<5; i++)
    {
        cout << endl;
        for (int j=0; j<i+1; j++)
        {
            cout << s << " ";
        }
    }
    return 0;
}