#include <bits/stdc++.h>

using namespace std;

bool can_be_sorted(vector<int>& a) {
    int n = a.size();
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    for (int i = 0; i < n; ++i) {
        bool matches = true;
        for (int j = 0; j < n; ++j) {
            if (a[(i + j) % n] != sorted_a[j]) {
                matches = false;
                break;
            }
        }
        if (matches) {
            return true;
        }
    }
    return false;

}


int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (can_be_sorted(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0 ;
}