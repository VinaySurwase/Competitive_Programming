#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());

        int greater_count = 0;
        int equal_count = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > favorite_value) 
            {
                greater_count++;
            } 
            else if (a[i] == favorite_value) 
            {
                equal_count++;
            }
        }

        if (greater_count >= k) {
            cout << "NO" << endl;
        } else if ((greater_count + equal_count) > k) {
            cout << "MAYBE" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
