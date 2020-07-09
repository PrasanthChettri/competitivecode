#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    cin>>n ;
    int arr[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
    		cin>>arr[i][j] ;         
        }
    }
    long long int sum = 0 ;
    for(int i =0  ; i < n ; i++){
        sum += arr[i][i] ;
        sum += arr[i][n - i - 1] ;
    }
    for(int i = 1 ; i < n -1 ; i++ ){
        sum += arr[i][0] ; 
        sum += arr[i][n-1] ;
        sum += arr[0][i] ;
        sum += arr[n-1][i] ; 
    }
    cout<<sum - arr[n/2][n/2];
	return 0;
}
