#include<bits/stdc++.h>
using namespace std ;
int a[100000];
int main(){
    int n , q , l ,r ; 
    cin>>n >> q;
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    for(int i = 0 ; i < q ; i++){
        cin>>l>>r ;
        if(a[l] < a[l-1] && a[r - 1] > a[r - 2] || a[l] > a[l-1] && a[r-1] < a[r-2])
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}
