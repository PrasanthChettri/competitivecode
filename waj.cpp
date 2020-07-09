#include<bits/stdc++.h>
using namespace std ;
int main(){
    double a[100000];
    double b[100000]; 
    int _ ;
    cin>>_ ;
    int n; 
    while(_--){
        cin>>n ;
        for(int i = 0 ; i < n ; i++)
            cin>>a[i] ;
        for(int i = 0 ; i < n ; i++)
            cin>>b[i];
       sort(a , a + n , greater<int>()) ;
       sort(b, b + n , greater<int>()) ;
       if(*a > *b || *b > *a )
           cout<<"YES"<<endl  ;
       else 
           cout<<"NO"<<endl  ;
    }

}
