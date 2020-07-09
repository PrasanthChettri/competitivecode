#include<bits/stdc++.h>
using namespace std;
int   arr[] = {3 , 5 , 10};
void get_score(int n , int level , set<int> * level_s){
    if(n < 3){
        return ;
    }
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i] < n){
            get_score(n-arr[i] , level++ ,level_s);
        }
        else if(arr[i] == n ){
            level_s->insert(level);
        }
    }
}
int main()
{
    cout<<arr[-1];
    return 0;
    int test_case ; 
    cin >>test_case ;
    while(test_case --){
        set <int> level_s ;  
        int n ; 
        cin >>n ;
        set <int>  * level_s_p =  &level_s;
        get_score(n , 0 , level_s_p);
        cout<<level_s.size()<<endl;
    }

	return 0;
}
