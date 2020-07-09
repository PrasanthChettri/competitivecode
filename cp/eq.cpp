#include<bits/stdc++.h>
using namespace std ;
vector <pair<int , int> > memo;

int   a[100000];
int   n, q  , l , r ;
void funci( int * icounter  , int *dcounter, pair<int , int> pq){
    int p =  pq.first  ,  q = pq.second ;
    std::vector<pair<int , int> >::iterator it = std::find(memo.begin(), memo.end(),  pq);
    if(it != memo.end() || p  == q || p < l || q > r)
       return ;
    memo.push_back(pq);
    bool i_flag = a[p] < a[p+1] ;
    bool d_flag = !i_flag ;

    if(p > l && a[p] > a[p - 1] || q < r && a[q] < a[q+1])
        i_flag = false ;
    else if(p > l && a[p]  < a[p - 1] || q < r && a[q] > a[q+1])
        d_flag = false ; 
    if(!i_flag  && !d_flag)
        goto last ;

    if(i_flag)
        for(register int  i = p ; i < q; i++)
            if(*(a+i) > *(a+i+1)){
                i_flag = false ;
                break ;
            }
    if(d_flag)
        for(register int i = p ; i < q; i++)
            if(*(a+i) < *(a+i+1)){
                d_flag = false ;
                break ; 
             }

    if(i_flag){
        (*icounter)++;
        return ; 
    }
    else if(d_flag){
        (*dcounter)++;
        return ; 
    }
    last : 
        funci(icounter , dcounter ,make_pair(p+1, q));
        funci(icounter , dcounter ,make_pair(p, q-1)); 
}
int main(){
    cin>>n>> q ;
    int icounter , dcounter ;
    pair <int , int> temp ;
    for( int j = 0 ; j < n ; j++)
        cin>>*(a+j);
    for(register int j = 0 ; j < q ; j++){
        icounter =  0 ; dcounter  = 0 ;
        cin >> l >> r ;
        l -- ;
        r -- ;
        temp = make_pair(l , r) ;
        funci(&icounter , &dcounter , temp) ;
        cout<<dcounter<<icounter<<endl ;
        if(dcounter == icounter) printf("YES\n");
        else  printf("NO\n") ; 
        memo.clear() ;
    }
}
