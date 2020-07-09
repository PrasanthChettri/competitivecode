#include<bits\stdc++.h>
using namespace std ; 
int main(){
    //int arr[] = {5, 7, -3, 2, 9, 6, 16, 22, 21, 29, -14, 10, 12};
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int max_here = 0 , max_so_far = 0 ; 
    for(int i  = 1 ; i < 8 ; i++){
        max_here = max_here + arr[i] ;
        if(max_here > max_so_far)
            cout<<max_so_far <<endl ; 
        }
        else if(max_here < 0 )
             max_here =  0 ;
    }
    cout<<max_so_far<<endl ; 
}
