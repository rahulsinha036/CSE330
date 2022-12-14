#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000 + 100; 

bool dp[maxN][maxN]; 

inline void solve() { 
    string a,b; cin >> a >> b; 
    memset( dp , 0 , sizeof dp ); 
    int n = a.size() , m = b.size(); 
    dp[0][0] = true; 
    for( int i = 1 ; i <= n ; i++ ) 
        for( int j = 0 ; j <= m ; j++ ) { 
            if( j && dp[i-1][j-1] && toupper(a[i-1]) == b[j-1] ) 
               dp[i][j] = true; 
            if( dp[i-1][j] && islower(a[i-1]) ) 
                dp[i][j] = true; 
        }
    if( dp[n][m] ) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() { 
    int t; cin >> t; 
    while( t-- ) 
        solve(); 
}

