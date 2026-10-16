#include <iostream>
using namespace std;

int main() 
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    for (int i=4; i>= 0; i--) 
    {
        for (int j=0; j<(4-i); j++) {

            cout << "  ";
        }
        for (int j=((2*i)+1); j>0; j--) 
        {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}