#include<bits/stdc++.h>
using namespace std ;

unsigned long long factorial(unsigned long long x){
    if (x == 1)
        return 1 ;
    return x*factorial(x-1);
}
int fun(unsigned long long n ,unsigned long long p){
      long long n_c = n - p;
      unsigned long  long f_p = factorial(p);
      unsigned long long temp = 0 ; 
      for(unsigned long long k = 2 ; k <= p ; k++){
          temp += f_p/(factorial(k)*(factorial(n - k))) ;
          if (temp > n_c) 
            return 0 ;
      }
      return 1 ;
}
int main(){
    int T ;
    cin>>T ;
    unsigned long long  n , p ; 
    while(T--){
        cin>>n>>p;
        cout<<fun(n - 1 ,p )<<endl;
    }
}
