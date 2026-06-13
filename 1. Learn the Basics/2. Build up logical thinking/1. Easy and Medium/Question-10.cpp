#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i=0; i<5; i++)                                            
    {
        cout << endl;

        for (int j=0; j<i+1; j++)
        {
            cout << "*";
        }
    }

    for (int i=3; i>=0; i--)                                            
    {
        cout << endl;
        
        for (int j=i+1; j>0; j--)
        {
            cout << "*";
        }
    }
    return 0;
}