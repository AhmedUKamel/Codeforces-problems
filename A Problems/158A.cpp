// Next Round
#include <iostream>
using namespace std;
int main ()
{
    int n,k,s = 0;
    cin >> n >> k;
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k = arr[k - 1];
    for (int i = 0; i < n; i++)
        if (arr[i] >= k && arr[i] != 0)
            s++;
    cout << s;
    return 0;
}