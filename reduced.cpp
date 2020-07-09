#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t  , n ;
    cin>>n_t ;
    while(n_t--){
        cin>>n ; 
        vector<int> arr(n) ;
        for(int i = 0 ; i < n ; i++)
            cin>>arr[i];
        vector<int> hash(max(arr)) = {0};
        for(int i = 0 ; i < n ; i++)
            hash[i] = 1;
        cout<<endl ;

    }
}
