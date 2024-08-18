#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int t;
    cin >> t;
    
    vector<string> results;
    results.reserve(t);

    for (int i = 0; i < t; ++i) {
        ll int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        if ((x1 > y1 && x2 > y2) || (x1 < y1 && x2 < y2)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}
