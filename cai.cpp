#include<bits/stdc++.h>
using namespace std ;
typedef long long int lli ;
int main(){
    int T ;
    cin>>T ;
    int n  ;
    int arr[1000] ; 
    bool flag  ; 
    int index ;
    while(T--){
        int change[3] = {0} ;
        cin>>n ; 
        flag = true ;
        for(int i = 0 ; i <  n ; i++)
            cin >>arr[i] ;
        for(int i = 0 ; i < n ; i++){
            index = arr[i]/5 ;
            if(index == 2){
                if(--change[0] < 0){
                    flag = false ;
                    break ;
                }
            }
             else if(index == 3){
                if(change[1]-1 >= 0)
                    change[1]-- ;
                else{
                    if(change[0] - 2 >= 0){
                        change[0] -= 2 ;
                    }
                    else {
                        flag = false ;
                        break ;
                    }
                }
             }
            change[index -1]++ ;
        }
        if(flag)
            cout<<"YES"<<endl ;
        else 
            cout<<"NO"<<endl ;
    }
}
