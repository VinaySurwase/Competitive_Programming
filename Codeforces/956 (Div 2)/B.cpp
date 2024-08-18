#include <iostream>
#include <vector>

using namespace std;

bool canTransform(const vector<vector<int> >& a, const vector<vector<int> >& b, int n, int m) {
    vector<vector<int> > diff(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            diff[i][j] = (b[i][j] - a[i][j] + 3) % 3;
        }
    }
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            int d = diff[i][j];
            diff[i][j] = (diff[i][j] - d + 3) % 3;
            diff[i + 1][j] = (diff[i + 1][j] - d + 3) % 3;
            diff[i][j + 1] = (diff[i][j + 1] - d + 3) % 3;
            diff[i + 1][j + 1] = (diff[i + 1][j + 1] - d + 3) % 3;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (diff[i][m - 1] != 0) return false;
    }
    
    for (int j = 0; j < m; ++j) {
        if (diff[n - 1][j] != 0) return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > a(n, vector<int>(m));
        vector<vector<int> > b(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }
        
        if (canTransform(a, b, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
