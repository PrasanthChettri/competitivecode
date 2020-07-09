#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n ;
    cin>>n ;
    int player = 1 ;
    long double  cumu1 = 0 ;
    int a , b ;
    long double max = 0 ;
    for(int _ = 0 ; _ < n ; _++){
        cin>>a>>b;
        cumu += a-b ;
        if(abs(cumu) > max){
            max = abs(cumu);
            if(cumu < 0)player = 2 ;
            else player = 1;
        }
    }
    cout<<player<<" "<<max ;
}
