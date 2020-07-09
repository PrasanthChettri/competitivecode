#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100000];
    int n_t , n ;
    cin>>n_t ;
    while(n_t--){
        cin>>n;
        int mini = INT_MAX ; 
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            mini = min(mini , arr[i]);
        }
        cout<<mini<<endl ;
    }
    return 0 ;
}
