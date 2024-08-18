#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define MOD 1000000007

using namespace std;

// Function to compute modular inverse using Fermat's Little Theorem
long long modInverse(long long a, long long m) {
    long long m0 = m, y = 0, x = 1;
    if (m == 1) return 0;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += m0;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        
        long long totalSum = accumulate(v.begin(), v.end(), 0LL) % MOD;
        long long specialSum = accumulate(v.begin(), v.begin() + k, 0LL) % MOD;
        long long nonSpecialSum = (totalSum - specialSum + MOD) % MOD;
        
        long long expectedAlice = 0, expectedBob = 0;
        
        if (k == n) {
            expectedAlice = totalSum;
            expectedBob = 0;
        } else {
            long long invN = modInverse(n, MOD);
            long long invNMinusK = modInverse(n - k, MOD);
            long long expectedSpecial = (specialSum * invN) % MOD;
            long long expectedNonSpecial = (nonSpecialSum * invN) % MOD;
            
            long long factorAlice = (n - k) * invN % MOD;
            long long factorBob = k * invNMinusK % MOD;
            
            expectedAlice = (expectedSpecial + expectedNonSpecial * factorAlice % MOD) % MOD;
            expectedBob = (expectedNonSpecial * factorBob % MOD) % MOD;
        }
        
        cout << expectedAlice << " " << expectedBob << endl;
    }
    
    return 0;
}
