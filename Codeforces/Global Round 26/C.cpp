#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        a[n] == 0 ;
        long long c = 0;
        for (int i = 1; i <= n; ++i) 
        {
            if ( c <= 0 && a[i] < 0) c = (c + a[i-1]);
            else c = abs(c + a[i-1]);
        }

        cout << abs(c) << endl;
    }

    return 0;
}