#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b) cout << a << " " << b << endl;
        else cout << b << " " << a << endl;
    }

    return 0 ;
}