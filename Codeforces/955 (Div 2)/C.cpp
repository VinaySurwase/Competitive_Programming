#include <iostream>
#include <vector>

using namespace std;

int maxWinningRounds(const vector<int>& cards, int l, int r) {
    int n = cards.size();
    int start = 0, end = 0;
    int currentSum = 0;
    int maxRounds = 0;

    while (end < n) {
        currentSum += cards[end];

        while (currentSum > r && start <= end) {
            currentSum -= cards[start];
            start++;
        }

        if (currentSum >= l && currentSum <= r) {
            maxRounds++;
            currentSum = 0;
            start = end + 1;
        }
        end++;
    }
    return maxRounds;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> cards(n);
        for (int j = 0; j < n; ++j) {
            cin >> cards[j];
        }
        results[i] = maxWinningRounds(cards, l, r);
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
