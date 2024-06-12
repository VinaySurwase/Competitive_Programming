#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t;
    cin >> t;
    while (t--) {
        ll int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (ll int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        long long sum_x = 0, sum_y = 0;
        ll int count = 0;

        for (ll int i = 0; i < n; ++i) {
            for (ll int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    sum_x += i + 1; 
                    sum_y += j + 1; 
                    ++count;
                }
            }
        }

        ll int center_x = round(static_cast<double>(sum_x) / count);
        ll int center_y = round(static_cast<double>(sum_y) / count);

        cout << center_x << " " << center_y << '\n';
    }

    return 0;
}
