#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t , n ;
    cin>>n_t ;
    while(n_t--){
        cin>> n ;
        vector <int> arr(n);
        for(int i = 0; i < n ; i++)
            cin>>arr[i];
        int pos = 0;
        int sum = 0 ;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] >= arr[pos])
                pos = i ;
            else 
                sum += arr[pos] - arr[i];
        }
        int posm = n-1 ;
        for(int i = n - 2; i >= pos ; --i)
            if(arr[posm] <= arr[i]){
                sum -= (arr[pos]-arr[posm])*(posm - i);
                posm = i ;
            }
        cout<<sum<<endl;
    }
}
