#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test ;
    for(int _ = 0 ; _ <  test ; _++){
        int l_a , l_b ;
        set <int> a ;
        set <int> b  ;
        int items ;
        for(int i = 0 ; i < l_a ; i++){
            cin>> items;
            a.insert(items);
        }
        for(int i = 0 ; i < l_b ; i++){
            cin>> items;
            b.insert(items);
        }
        for(set<int> :: iterator itr = a.begin() ; itr != a.end() ; itr++){
            for(set <int> :: iterator itr2  = b.begin()  ; itr2 != b.end() ; itr2++){
                if(*itr == *itr2)
                    cout<<*itr << " " ;
            }
        }
        cout<<endl;
    }
}
