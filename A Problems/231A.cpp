// Team
#include <iostream>
using namespace std;
int main ()
{
    int n,s = 0, t = 0;
    bool x;
    cin >> n;
    while (n--)
    {
        s = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> x;
            s += x;
        }
        if (s > 1)
            t++;
    }
    cout << t;
    return 0;
}