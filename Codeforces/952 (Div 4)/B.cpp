#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        ll int n;
        cin >> n;

        ll int opti_x = 2;
        ll int maxsum = 0;

        for (ll int x = 2; x <= n; ++x) 
        {
            ll int K = n / x;
            ll int sum = x * K * (K + 1) / 2;

            if (sum > maxsum) 
            {
                maxsum = sum;
                opti_x = x;
            }
        }

        cout << opti_x << endl;
    }


    return 0;
}
