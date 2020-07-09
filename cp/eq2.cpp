#include<bits/stdc++.h>
using namespace std ;
int a[100000];
int find_inc(int p , int q){
    if(p == q)
        return 0 ;
    if(p == q - 1){
        if(a[p] < a[q]){
            return 1 ;
            cout<<p<<q<<endl;
         }
        return 0 ;
    }
    for(int i = p ; i < q ; i++)
        if(a[i] > a[i+1])
            return find_inc(i + 1, q) + find_inc(p , i);
    cout<<p<<q<<endl;
    return 1 ;
}

int find_dec(int p , int q){
    if(p > q)
        return 0 ; 
     if(p == q - 1){
        if(a[p] > a[q]){
            return 1 ;
            cout<<p<<q<<endl;
         }
        return 0 ;
    }
    for(int i = p ; p < q ; i++)
        if(a[i] < a[i+1])
            return find_inc(i + 1, q) + find_inc(p , i);
    cout<<p<<q<<endl;
    return 1;
}
int main(){
    int n ,  q ;
    int l , r ;
    int counteri , counterd ;
    cin>>n >> q;
    for(int i = 0 ;i < n  ; i++)
        cin>>a[i];
    for(int i = 0 ; i < q ; i++){
        cin>>l>>r ;
        l -- ; r -- ;
        cout<<"inc :"<<endl;
        counteri = find_inc(l , r) ;
        cout<<"dec :"<<endl;
        counterd =  find_dec(l , r) ;
        cout<<counteri<<endl;
        cout<<counterd;
        if(counteri== counterd)printf("YES\n");
        else printf("NO\n");
    }
}
