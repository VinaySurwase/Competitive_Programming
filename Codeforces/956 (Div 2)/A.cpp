#include <iostream>
#include <vector>

using namespace std;

void solve(int n) {
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
