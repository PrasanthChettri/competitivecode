#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t, n  , time ;
    char  pos ;
    cin>>n_t ;
    int temp ; 
    while(n_t--){
        cin>>n ; 
        int A[4][4] = {0};
        int maxi[4] = {0} ; 
        for(int i = 0 ; i < n ; i++){
            cin>>pos>>time;
            cout<<((int)'A') - pos<< " " << ((int) time)/4 ;
            temp = ++A[pos - pos][pos/4];
            maxi[4]  = max(maxi['A' - pos] ,  temp);
        }
    }
}
