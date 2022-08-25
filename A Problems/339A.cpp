// Helpful Maths
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    vector <int> v(3);
    for (auto c : s)
        v[c - '1']++;
    while(v[0] + v[1] + v[2] > 1)
        if (v[0])
        {
            cout << "1+";
            v[0]--;
        }
        else if (v[1])
        {
            cout << "2+";
            v[1]--;
        }
        else if (v[2])
        {
            cout << "3+";
            v[2]--;
        }
    if (v[0])
        cout << "1";
    else if (v[1])
        cout << "2";
    else if (v[2])
        cout << "3";
    return 0;
}