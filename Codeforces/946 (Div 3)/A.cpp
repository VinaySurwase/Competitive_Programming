#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T ;
    cin >> T ;
    while (T--)
    {
        int x, y, s = 0 , n = 15 , a;
        cin >> x >> y ;
        if ( y % 2 == 0 )
        {
            s = y / 2 ;
            a = (n*s)-(y*4) ;
            if ( x > a) 
            {
                if ( (x-a)%15 == 0)
                {
                    cout << s + (x-a)/15 << endl ;
                }
                else 
                {
                    cout << s + 1 + (x-a)/15 << endl ;
                }
            }
            else
            {
                cout << s << endl ;
            }
            
        }
        else
        {
            s = (y / 2) + 1  ;
            a = (n*s)-(y*4) ;
            if ( x > a) 
            {
                if ( (x-a)%15 == 0)
                {
                    cout << s + (x-a)/15 << endl ;
                }
                else 
                {
                    cout << s + 1 + (x-a)/15 << endl ;
                }
            }
            else
            {
                cout << s << endl ;
            }
            
        }
       



    }
    

    return 0 ;
}