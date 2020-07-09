#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ; 
    cin>>n ; 
    vector <int> arr(n)  ; 
    int counter = 0 ;
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];
    for(int i = 0 ; i < n ; i++)
         for(int j = i+1 ; j < n ; j++)
             if(arr[i] +arr[j] == 8)
                counter ++ ; 
    cout<<counter ;
}
