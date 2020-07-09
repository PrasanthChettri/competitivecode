#include<bits/stdc++.h>
using namespace std ;
typedef long long int  ll ;  
int main(){
        int T ;
        cin>>T ;
        ll C  ;
        int n , q ;
        string s ;
        int temp ;
        while(T--){
            vector<int> arr(26);
            cin>>n>>q ; 
            cin>>s ;
            for(int i = 0 ; i < n ; i++)
                arr[s[i] - 'a']++ ;
            ll summer = 0 ;
            ll diff ;
            for(int i = 0 ; i < q ; i++){
                cin>>C ; 
                summer = 0 ;
                for(int i = 0 ; i < 26 ; i++){
                    diff = (arr[i] - C)  ;
                    summer += diff > 0 ? diff : 0 ;
                }
                cout<<summer<<endl ;
            }
        }
}
