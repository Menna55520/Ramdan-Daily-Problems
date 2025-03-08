#include <bits/stdc++.h>
using namespace std ;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin>>t;
    while(t--){
        int n  ; cin>>n ;
        string s ; cin>>s;
        int c = n ;
        int j = n - 1 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i] != s[j] && i < j) { c -= 2; j-- ; }
            else break ;
        }
        cout<<c<<'\n' ;
    }


}

