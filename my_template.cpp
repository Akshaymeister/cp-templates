    /* @author: Akshay Nigam */
    #pragma GCC optimize("O3,unroll-loops")
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long 
    #define ull unsigned long long
    #define lld long double
    #define MOD 1000000007    
    #define nline '\n'
    #define need_for_speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    // vectors macros
    #define all(x) begin(x), end(x)
    #define rall(x) x.rbegin(), x.rend()
    #define sz(x) ((int)(x).size())
    //bits
    #define setbitc(x) __builtin_popcountll(x)//counts the number of set bits in a number
    #define countlz(x) __builtin_clzll(x)// counts leading zeroes after the MSB
    #define counttz(x) __builtin_ctzll(x)// counts trailing zeroes after LSB

    const int INF = LLONG_MAX >> 1;// INF + INF will not overflow
    /*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    CODE GOES BELOW!!!*/
    void solve()
    {
      
    }
    signed main() 
    {
      #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
      #endif
      need_for_speed
      cout << fixed << setprecision(9);
      int t = 1; 
      cin >> t;
      while (t--) 
      {
        solve();
      } 
    }

   /* stuff you should look for
    * int overflow, array bounds
    * special cases (n=1?)
    * do smth instead of nothing and stay organized
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
    * CHECK FOR REPEATED NUMBERS(NOT ALWAYS UNIQUE)
    * Bezout's Identity gcd(a,b) -----> ax+by
    * Fermat theorem ---> inverse of (x) = pow(x, m - 2);
    * gcd(x,y,z) =gcd(x,y-x,z-y)
    * gcd(x+a,y+a,z+a)= gcd(x+a , y-x ,z-y)
    * s.erase(unique(s.begin(), s.end()), s.end()); ----> remove all the duplicates 
    */
