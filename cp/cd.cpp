#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t ;
    cin>>n_t ;
    int a ,  b , d ,n ;
    int result ;
    double s ;
    for(int i =0  ; i < n_t ; i++){
        cin>>n ;
        cin>>a ;
        s = 5*pow(10 , n);
        cout<<s ;
        cout<<s<<endl;
        cout.flush();
        s -= (float) a ;
        cin>>b ;
        s -= (float) b + 1 ;
        cout<< 1 ;
        cout.flush();
        cin>>d ;
        s -= (float) d + 1 ;
        cout<< s ;
        cout.flush();
        cin>>result ;
        if (result == -1)
            return 0; 
    }
}
