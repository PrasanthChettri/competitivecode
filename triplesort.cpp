#include<bits/stdc++.h>
using namespace std ;
// {4 3 2 1}
int main(){
        int T ;
        cin>>T ;
        int arr[200000] ;
        int n ; 
        int i1 , i2 ,i3 ;
        while(T--){
            cin>>n ;
            for(int i = 0 ; i < n ; i++)
                cin>>arr[i] ;
            for(int i = n - 1 ; i >= 3 ; i--){
                if(arr[i] > arr[i+1]){
                    if(arr[i+1] > arr[i+2]){
                        i1 = i+1; 
                        i2 = i+0;
                    }
                }
            }

        }
}
