#include<bits/stdc++.h>
using namespace std ;
int main(){
    int arr[100000];
    int n_t  , n ;
    cin>>n_t;
    while(n_t--){
        cin>>n;
        int sum = 0 ;
        for(int i = 0 ; i < n*2 ; i++){
            cin>>arr[i] ;
            sum += arr[i]; 
        }

        sum = sum/(n + 1);
        sort(arr , arr+(n*2));

        if(arr[2*n-1] != sum || arr[2*n-2] != sum){
            cout<<0<<endl ;
            return 0 ;
        }
        for(int i = 0 ; i < n ; i++)
            if(arr[i] + arr[2*n-3-i] != sum){
                cout<<0 <<endl ; 
                return 0 ;
            }

        cout<<2*(n-1) <<endl;
    }
}
