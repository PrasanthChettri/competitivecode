#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n_t ;
    cin>>n_t ;
    long long int  a , b , c , f , maxi;
    int n ;
    while(n_t--){
        maxi = LLONG_MAX;
        cin>>n>>a>>b>>c;
        if(a > b)
            swap(a , b);
        for(int i = 0  ; i < n ; i++){
            cin>>f;
            if(b > f)
                if(a > f)
                    maxi = min((b-f)+(a-f) + c ,  maxi);
                else 
                    maxi = min(b-a+ c , maxi);
             if(b < f)
                maxi = min(f - b + f - a +  c , maxi); 
        }
        cout<<maxi<<endl;
    }
}
