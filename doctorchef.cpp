#include<bits/stdc++.h>
using namespace std ;
typedef long long int lli ; 
int main(){
    int t ;  
    cin>>t ; 
    int n ; 
    lli k ; 
    while(t--){
        cin>>n >> k;
        lli a[n] ;
        for(int i = 0 ; i< n  ; i++)
            cin>>a[i] ;
        sort(a , a+n) ;
        jojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojojjjojojoojolli pivot = 0 ; 
        if(oa
        lli counter = pivot  ;
        lli cure = k; 
        for(int i = pivot ; i<b; i++){
            lli infected = a[i] ;
            lli days = 0 ;
            while(infected > 0){
                infected -= cure ;
                infected = min(a[i] , infected*2);
                cure *= 2 ; 
                days ++ ;
            }
            cure += infected/2 ; 
            cout<<cure <<" "  ; 
            counter += days ; 
        }
  }
}
/**
    10 11
    10
    10 11 - 10
    10 2
    10 - 4 0
**/
