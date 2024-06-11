#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
        unordered_map<char, int> difficulty_count;
        for (char c : a) {
            difficulty_count[c]++;
        }
        
        int additional_problems_needed = 0;
        
        for (char difficulty = 'A'; difficulty <= 'G'; ++difficulty) {
            int required_problems = m - difficulty_count[difficulty];
            if (required_problems > 0) {
                additional_problems_needed += required_problems;
            }
        }
        
        cout << additional_problems_needed << endl;
    }
    
    return 0;
}
