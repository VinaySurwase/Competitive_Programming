#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool find_subarray(const vector<int>& arr, int n, int required_sum, int& start_index, int& end_index) {
    int current_sum = 0;
    start_index = 0;
    for (int i = 0; i < n; ++i) {
        current_sum += arr[i];
        while (current_sum > required_sum && start_index < i) {
            current_sum -= arr[start_index++];
        }
        if (current_sum == required_sum) {
            end_index = i;
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        int tot = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            tot += a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        int required_sum = (tot + 2) / 3;  // This is the ceiling of tot / 3

        int la, ra, lb, rb, lc, rc;

        bool found = false;

        // Try to find subarrays in the order of a -> b -> c
        if (find_subarray(a, n, required_sum, la, ra)) {
            if (find_subarray(vector<int>(b.begin() + ra + 1, b.end()), n - ra - 1, required_sum, lb, rb)) {
                lb += ra + 1;
                rb += ra + 1;
                if (find_subarray(vector<int>(c.begin() + rb + 1, c.end()), n - rb - 1, required_sum, lc, rc)) {
                    lc += rb + 1;
                    rc += rb + 1;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        } else {
            cout << la + 1 << " " << ra + 1 << " " << lb + 1 << " " << rb + 1 << " " << lc + 1 << " " << rc + 1 << endl;
        }
    }
    return 0;
}