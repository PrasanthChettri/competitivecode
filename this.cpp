#include<bits/stdc++.h>
using namespace std ;
typedef long long int lli ; 

bool sorter(pair<lli , int > a , pair<lli, int> b){
    return a.first > b.first ; 
}

int main(){
    int T ;
    cin>>T ;
    int n ; 
    while(T--){
        cin>> n ;
        vector<lli> a(n) , b(n); 
        for(int i = 0 ; i < n ; i ++)
            cin>>a[i] ; 
        for(int i = 0 ; i < n ; i ++)
            cin>>b[i] ; 
        lli maxa =  max(*max_element(a.begin() ,  a.end())  , *max_element(b.begin() ,  b.end())) ; 
        vector<int> freqa(maxa , 0) ; 
        vector<int> freqb(maxa , 0) ; 
        set<lli>  numbers ; 
        for(int i = 0 ; i < n ; i ++){
            numbers.insert(a[i] - 1) ; 
            numbers.insert(b[i] - 1) ;
            freqa[a[i] - 1]++ ; 
            freqb[b[i] - 1]++ ; 
        }
        vector<pair<lli , int> > ash ; 
        vector<pair<lli , int> > bsh ; 
        for(lli t : numbers){
            if(freqa[t] > freqb[t])
                ash.push_back(make_pair(t + 1 , freqa[t] - freqb[t]));
            else if(freqa[t] < freqb[t])
                bsh.push_back(make_pair(t + 1, freqb[t] - freqa[t]));
        }

        lli counter = 0 ;
        sort(ash.begin() , ash.end()) ; 
        sort(bsh.begin() , bsh.end() , sorter);
        vector<pair<lli , int> > :: iterator ai = ash.begin()  , bi  = bsh.begin(); 
        while(ai != ash.end() and  bi != bsh.end()){
            if(ai->second%2 == 1 or bi->second%2 == 1){
                counter = - 1 ;
                break;
            }
            counter += min(ai->first , bi->first);
            ai->second -= 2 ;
            bi->second -= 2 ;
            if(ai->second == 0)
                ai ++ ;
            if(bi->second == 0)
                bi ++ ;
        }
        if(ai != ash.end() or bi != bsh.end())
            cout<< - 1 <<endl   ; 
        else 
            cout<<counter<<endl ; 
    }
}
