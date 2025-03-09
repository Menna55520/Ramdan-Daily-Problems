#include <bits/stdc++.h>
using namespace std ;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin>>t ;
    while(t--){
        int n ; cin>>n ;
        vector<int>v(n);
        map<int , int>freq ;
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            freq[v[i] - i]++;
        }
        int c = 0 ;
        for(auto it : freq){
            int val = it.second ;
            if(val > 1){
                c+= val * (val-1) / 2 ;
            }
        }
        cout<<c<<'\n';


    }


}

