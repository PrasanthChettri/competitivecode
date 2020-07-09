#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100000];
    int n_t , n ;
    cin>>n_t ;
    while (n_t--){
        cin>>n;
        arr[0] = - 1;
        for(int i = 1 ; i <= n ; i++)
            cin>>arr[i];
        int pos = 0 ;
        int spos = 0 ;
        int  sum = 0 ;
        for(int i = 1 ; i <= n ; i++){
            if(arr[pos] <= arr[i]){
                if(arr[pos] != arr[i])
                    spos = pos ;
                pos = i ;
            }
            else if(arr[spos] <= arr[i])
                spos = i ;

            sum += arr[pos] - arr[i];

            if(i == n && spos > pos)
                sum -= (spos- pos)*(arr[pos] - arr[spos]);

        }
        if(spos > pos)
            for(int i = n ; i > spos ; --i)
                sum -= (arr[pos] - arr[i]);
        cout<<sum <<endl;;

    }
    return 0;
}
