#include<bits/stdc++.h>
using namespace std ;
string arr[1000] ; 
int n , k;
int getmin(int step , int pos , int counter){
    if(step  == n){
        if(pos == n-1)
            return counter ;
        return INT_MAX ;
    }
    int mini = INT_MAX;
    int start = pos - k < 0  ? 0 : pos - k ;
    int end = pos + k > n ? n : pos + k ; 
    for(int i = start  ; i < end ; i++)
        if(arr[step][i])
            mini = min(mini , getmin(step+1 , i, counter+1));
    return mini ;
}
int main(){
    int n_t ;
    cin>>n_t ;
    while(n_t--){
        cin>>n>>k;
        for(int i = 0 ; i < n ; i++)
            gets(cin , arr[i]) ;
        cout<<getmin(0 , 0 , 0)<<endl;
    }
}
