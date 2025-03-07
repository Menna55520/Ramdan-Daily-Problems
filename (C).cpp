#include <bits/stdc++.h>

using namespace std ;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin>>n ;
    int arr[n] ;
    bool even = false , odd = false;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
        if(arr[i] % 2 == 0)even = true ;
        else odd = true ;
    }
    if(even && odd) sort(arr , arr+n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

