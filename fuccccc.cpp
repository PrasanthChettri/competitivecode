#include<bits/stdc++.h>
using namespace std ;
string a ;
vector<pair<int , int> > memoize ; 
void words(int p ,int  q){
    if (find(memoize.begin() , memoize.end() , make_pair(p , q)) != memoize.end() || p >= q)
        return ; 
    cout<<a.substr(p , q) <<endl;
    memoize.push_back(make_pair(p , q));
    words(p+1 , q);
    words(p , q-1);
}
int main(){
    getline(cin , a);
    words(0 , a.length());
    return 0;
}
