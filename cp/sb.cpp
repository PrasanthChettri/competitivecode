#include<bits/stdc++.h>
using namespace std ;

stack<int> *  rev(stack <int> s){
    stack <int> * temp  = new stack<int>; 
    int a  ;
    while(!s.empty()){
        a = s.top() ;
        temp->push(a) ;
        s.pop() ;
    }
    return temp ;
}
void showstack(stack <int>  s) 
{ 
    while (!s.empty()) 
    { 
        cout << s.top()<< ' ' ; 
        s.pop(); 
    } 
    cout << '\n'; 
}
int find_op(stack <int> s , int k){
    int temp =  k ;
    if(s.empty())
        return 0 ;
    while(!s.empty() && k >= s.top()){
        k -= s.top() ;
        s.pop() ;
    }
    k -= s.top() ;
    return 1 + min(find_op(*rev(s) , temp) , find_op(s , temp));
}
int main(){
    int n_t ;
    cin>>n_t ;
    int a , b , c ;
    for(int i =0  ; i < n_t ; i++){
        int k  ;
        stack<int> s ; 
        cin>>k>>a>>b>>c; 
        s.push(a);
        s.push(b);
        s.push(c);
        cout<<min(find_op(*rev(s) , k) , find_op(s , k))<<endl;
    }
}
