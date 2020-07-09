#include<bits\stdc++.h>
using namespace std; 
long long kadanes(long long  arr[] , int n){
    int max_here = 0 ; 
    int max_so_far = 0 ; 
    for(int i = 0 ; i < n ; i++){
        max_here = max_here + arr[i] ;
        if(max_here  > max_so_far) 
            max_so_far = max_here   ;
        else if(max_here < 0)
            max_here = 0 ; 
    }
    return max_so_far ; 
}
int main(){
    int n_t , n ; 
    cin>>n_t ; 
    while(n_t--){
        cin>>n ; 
        long long arr[n] ; 
        for(int i = 0  ; i < n ; i++)
            cin>>arr[i];
        long long ans = kadanes(arr , n );
        long long suffix[n] ;
        suffix[n-1] = arr[n-1];
        long long cur = arr[n-1] ; 
        for(int i = n - 2 ; i >= 0 ; i--){
            cur += arr[i] ;
            suffix[i] = max(cur , suffix[i+1]);
        }
        cur = 0 ; 
        for(int i = 0 ; i < n-1 ; i++){
            cur+= arr[i] ; 
            ans = max(ans , cur+suffix[i+1]);
        }
        cout<<ans;
    }
}
