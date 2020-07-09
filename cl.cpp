#include<bits/stdc++.h>
using namespace std ; 
int k ;
void show(vector<int>);
int func(vector<int> a , int n){
   vector<int>::iterator f = a.begin() ;
   if (n == 1)
        return *f;

   for(int i = k ; i <= a.size() ; i += k){
        a.erase(f + i - 1);
        if(a.size() == 1)
            return *f ; 
    }

    if (n%k != 0 && a.size() > 1)
        a.erase(f + (k-n%k-1)) ;
    return func(a , a.size());
}

int main(){
    int n_t ; 
    cin>>n_t ;
    while(n_t--){
        int n ;
        cin>>n>>k ; 
        vector<int> mujlim(n);
        for(int i = 0  ; i <  n ; i++)mujlim[i] = i+1;
        cout<<func(mujlim ,n) ;
    }
}
