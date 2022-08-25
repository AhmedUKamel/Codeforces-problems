// Beautiful Matrix
#include <iostream>
using namespace std;
int main ()
{
    int x,r,c;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x)
            {
                c = j;
                r = i;
            }
        }
    r = abs(2 - r);
    c = abs(2 - c);
    cout << r + c;
    return 0;
}