#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t ;
    cin>>n_t ;
    long long  arr[4][4] = {0} ; 
    long long  maxi[4] = {0}  ;
    long long maxt[4] = {0} ; 
    char pos; int  time;
    long long  n ; 
    long long profit ;
    while(n_t--){
        cin>>n ; 
        for(int i = 0 ; i < n ; i++){
            cin>>pos>>time ;
            ++arr[pos- 'A'][time/4];
        }
        for(int i = 0 ; i < 4 ; i++){
            for(int j = 0 ; j < 4 ; j++){
}
