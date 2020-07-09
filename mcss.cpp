#include<bits/stdc++.h>
using namespace std ;
int n ; 
int arr[100000];
int sum ;
void find_arr(int posa, int posb){
    static int prev_posa = posa; 
    static int prev_posb = posb; 
    if(posa == posb)
        return ; 
    if(prev_posa == posa){
        sum = max(sum , sum + arr[posb]);
        prev_posb = posb; 
    }
    else{
        sum = max(sum , sum + arr[posa]);
        prev_posa = posa; 
    }
    find_arr(posa + 1 , posb); 
    find_arr(posa , posb-1); 
}
int main(){
    int n_t ;
    cin>>n_t ;
    while(n_t--){
        cin>>n ;
        sum = 0;
        for(int i =  0 ; i < n ; i++)
            cin>>arr[i] ;
        find_arr(0 , n-1) ;
        cout<<sum ;
    }
}
