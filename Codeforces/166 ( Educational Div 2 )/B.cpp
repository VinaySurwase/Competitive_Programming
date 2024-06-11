#include <bits/stdc++.h>

using namespace std;


long long int num_operations(vector<long long int>& a, vector<long long int>& b) 
{
    long long int operations = 1;
    vector<long long int> diff ;
    for (int i = 0 ; i < a.size() ; i++)
    {
        operations += abs(a[i] - b[i]);
        diff.push_back(labs(a[i] - b[a.size()]));
        diff.push_back(labs(b[i] - b[a.size()]));
        if (a[i] <= b[a.size()] && b[i] >= b[a.size()] || b[i] <= b[a.size()] && a[i] >= b[a.size()] ) diff.push_back(0) ;
    }
    sort(diff.begin() , diff.end());
    operations += diff[0] ;
    return operations ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--)
    {
        long long int n ;
        cin >> n ;  
        vector<long long int> a(n) , b(n+1) ;
        for (long long int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for (long long int i = 0 ; i <= n ; i++)
        {
            cin >> b[i] ;
        }

        cout << num_operations(a , b) << endl ;
   
    }

    return 0 ;
}