#include<bits/stdc++.h>
using namespace std ;
int main(){
    int _ , n , m ; 
    vector<pair <int , int> > bounds(301) ;
    char tempc ; 
    bool first  ; 
    cin>>_ ;
    while(_--){
       int sum  = 0; 
       int temp ; 
       int prev_i ;
       cin>>n >> m ;
       bounds[n].first = m ; 
       bounds[n].second = 0 ;
        for(int i = 0 ; i <n ; i++){
            first = true ; 
            bounds[i] = make_pair(-1 ,-1) ;
            for(int j = 0 ; j < m ; j++){
                cin>>tempc;
                if (tempc == 'P' && first){
                        bounds[i].first = j ; 
                        bounds[i].second = j ;
                        first = false ;
                }
                else if(tempc == 'P')
                    bounds[i].second = j ;
               }
          }
          first = true;
          int jumval = 1 ;
          for(int i = 0 , change = 0 ; i < n  ; i++  , change++ ){
               if(!(bounds[i].first + 1)  and !(bounds[i].second +1)){
                   if (!first)
                       jumval++;
                   change ++ ;
                   continue;
               }
               else if(!(change % 2)){
                   if(first){
                       first = false ;
                       prev_i = bounds[i].first ;
                       sum--; 
                   }
                   temp = max(bounds[i].second  ,  bounds[i+1].second) ; 
                   sum +=  abs(temp - prev_i) + jumval  ;
                   prev_i = temp ;
               }
               else {
                   if(first){
                       first = false ;
                       prev_i = bounds[i].second ;
                       sum -= 1 ;
                   }
                   temp = min(bounds[i].first , bounds[i+1].first) ;
                   sum +=  abs(prev_i  - temp) + jumval;
                   prev_i = temp ;
               }
               jumval = 1 ;
           }
           cout<<sum <<endl;
        }
}
