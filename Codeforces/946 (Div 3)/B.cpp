#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<char> s ;
        for (int i = 0 ; i < n ; i++)
        {
            char c ;
            cin >> c ;
            s.push_back(c) ;
        }
        set<char> unique_s(s.begin(), s.end());
        vector<char> r;
        for (char c : unique_s)
        {
            r.push_back(c);
        }
        sort(r.begin(), r.end()) ;
        vector<pair<char, char> > pairs;
        for (int i = 0; i < r.size() / 2; ++i) {
            pairs.push_back(make_pair(r[i], r[r.size() - 1 - i]));
        }   
        for (int i = 0; i < s.size(); ++i) {
            for (const auto p : pairs) {
                if (s[i] == p.first || s[i] == p.second) {
                    s[i] = (s[i] == p.first) ? p.second : p.first;
                    break;
                }
            }
        }
        for (char c : s) {
            cout << c;
        }
        cout << endl;


    }

    return 0 ;
}