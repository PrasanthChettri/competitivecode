#include<bits/stdc++.h>
using namespace std ;
int josephus(int n , int k){
    if (n == 1)
       return 1 ;
    return (josephus(n - 1 , k) + k - 1)%n + 1;
}
int main(){
    int _  , n , k; 
    cin>>_;
    while(_--){
        cin>>n>>k;
        cout<<josephus(n , k);
    }
}
