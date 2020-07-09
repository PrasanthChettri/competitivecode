#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t ; 
    cin>>n_t  ; 
    while(n_t--){
        int arrp[51] = {0}; 
        int arrf[51] = {0} ;
        int final_prices[51]  = {0} ; 
        int nf ,  np ; 
        cin>>nf>>np ; 
        int temp ; 
        for(int i = 0 ; i < nf ; i++)
            cin>>arrf[i];
        for(int i = 0 ; i < nf ; i++){
            cin>>temp ; 
            final_prices[arrf[i]] += temp ;
       }
       int min = INT_MAX;
        for(int i = 1 ; i <= np ; i++){
            temp = final_prices[i] ; 
            cout<<temp <<" " ; 
            min = temp != 0  && temp < min ? temp : min ;  
        }
        cout<<endl ; 
        cout<< min<<endl ; 
    }
}
