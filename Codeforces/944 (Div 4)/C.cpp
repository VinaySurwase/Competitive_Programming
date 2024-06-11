#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b ,c ,d;
        cin >> a >> b >> c >> d;
        if ((a < c && c < b && (d < a || d > b)) || (a < d && d < b && (c < a || c > b)) ||
            (b < c && c < a && (d < b || d > a)) || (b < d && d < a && (c < b || c > a)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0 ;
}