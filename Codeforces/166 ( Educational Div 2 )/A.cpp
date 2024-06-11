#include <bits/stdc++.h>
using namespace std;

bool isstrong(const string& s) {
    vector<char> digits;
    vector<char> letters;
    
    for (char ch : s) {
        if (isdigit(ch)) {
            digits.push_back(ch);
        } else {
            letters.push_back(ch);
        }
    }
    
    if (!is_sorted(digits.begin(), digits.end())) {
        return false;
    }
    
    if (!is_sorted(letters.begin(), letters.end())) {
        return false;
    }
    
    bool seenL = false;
    for (char ch : s) {
        if (isalpha(ch)) {
            seenL = true;
        } else if (seenL && isdigit(ch)) {
            return false;
        }
    }
    
    return true;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << (isstrong(s) ? "YES" : "NO") << endl;
    }
    return 0;
}