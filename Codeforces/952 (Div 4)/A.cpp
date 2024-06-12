#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--)
    {
        string a, b;
        cin >> a >> b;

        char tempc = b[0];
        b[0] = a[0];
        a[0] = tempc;

        cout << a << " " << b << endl;
    }

    return 0 ;
}