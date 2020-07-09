#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t  , n ;
    cin>>n_t   ;
    int si , vi , pi ; 
    int maxi ;
    while(n_t--){
        maxi = - 1;
        cin>>n;
        for(int i = 0; i < n ; i++){
            cin>>si>>pi>>vi;
            si++ ;
            maxi = max((pi/si)*vi , maxi);
        }
        cout<<maxi<<endl;
    }
}
