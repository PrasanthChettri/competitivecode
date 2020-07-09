#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long  n_t, n , k  ;
    cin>>n_t ;
    long long  arr[100000] ;
    long long  start , end;
    while(n_t--){
        cin>>n>>k ; 
        for(int i = 0 ; i < n ; i++)
            cin>>arr[i] ; 
        start = 0 ; end = n- 1; 
        while(start != end){
            if(arr[end]%k == 0)
                end-- ;
            else if(arr[start] < k - arr[end]%k){
                arr[end] += arr[start] ;
                start ++ ; 
            }
            else {
                arr[start] -= k- arr[end]%k ;
                end -- ; 
            }
        }
        long long  sum  =arr[start]; 
        if(start == n-1 && arr[start]%k != 0) 
            sum = arr[end];
        cout<<sum<<endl ;
    }
}
