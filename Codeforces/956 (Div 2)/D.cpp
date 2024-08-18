#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        unordered_map<int, int> index_map;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            index_map[a[i]] = i;
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> sorted_a = a;
        vector<int> sorted_b = b;
        
        sort(sorted_a.begin(), sorted_a.end());
        sort(sorted_b.begin(), sorted_b.end());
        
        bool possible = true;
        
        for (int i = 0; i < n; ++i) {
            if (sorted_a[i] != sorted_b[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
