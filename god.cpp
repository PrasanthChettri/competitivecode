#include<bits\stdc++.h>
using namespace std;
vector<int> func(vector<int> arr , int len , int k){
    if (len == 1)
        return arr ;
    vector<int> temp ;
    int n_len  = 0 ; 
    for(int i = 0 ; i < len + k - 1 ; i++)
        if((i+1)%k){
            temp.push_back(i+1) ;
            n_len ++ ; 
        }
    return func(temp , n_len  , k);
}
int main()
{
    int n_t ; 
    cin>>n_t ;
    int n , k  ; 
    vector<int> arr(200) ; 
    for(int _ = 0  ; _ < n_t ; _++){
        for(int i = 0 ; i  <  n ; i++)arr[i] = i + 1 ;  ;
        cout<<func(arr  , n , k)[0]<<endl;
    }
	return 0;
}
