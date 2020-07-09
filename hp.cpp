#include<iostream>
#include<bits\stdc++.h>
using namespace std;

vector<int> hash;
int func(int x){
    int n  = 0 ;
    int temp = x; 
    while(x){
        n += pow(x%10 , 2) ;
        x /= 10  ; 
    }
    if (n == 1)
        return true; 
    if(find(hash.begin() , hash.end() , n) != hash.end())
        return false ; 
    return func(n); 
}
int hpn(int n ){
    bool is_hp = false ;
    int i ;
    for( i = n ; !is_hp ; i++)
        is_hp  = func(i) ;
    return i ; 
}
int main()
{
    int x , _;
    cin>>_ ; 
    while(_--){
        cin>>x ;
        cout<<hpn(++x)<<endl ;
        hash.clear();
    }
	return 0;
}
