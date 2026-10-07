#include <bits/stdc++.h>
using namespace std; 

class Solution 
{
    public:
    void reverse_array(vector<int>& Array, int size)
    {
        int p1 = 0;
        int p2 = size - 1;

        while (p1 < p2)
        {
            swap(Array[p1], Array[p2]);
            p1++;
            p2--;
        }
    }
};

int main() {
    Solution Sol;

    vector<int> Array = {1,2,3,4,5};
    int size = Array.size();

    Sol.reverse_array(Array, size);

    for (int num : Array)
    {
        cout << num << " ";
    }
    return 0;
}