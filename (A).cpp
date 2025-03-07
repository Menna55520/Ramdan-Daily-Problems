#include <iostream>
using namespace std ;
int main() {
    int n ; cin>>n ;
    int arr[n] ;
    for(int i = 0 ; i < n  ; i++){
        cin>>arr[i];
    }
    int idx = 1 ;
    for(int i = 1 ; i < n ; i++){
        int current = arr[i] % 2 ;
        int prev = arr[i-1] % 2 ;
        int next = arr[(i+1)%n] % 2 ;
        if(current != prev && current != next){
            idx = i + 1 ;
            break ;
        }
    }
    cout<<idx;



}
