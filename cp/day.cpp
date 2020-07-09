#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int n , m , q ;
    cin>>n >>m >>q;
    int *a = new int[n];
    register int  x ; register int y ;
    register int  max = 0 ; register int t_max ;
    for(int i = 0 ; i < m ; i++){
        cin>>x>>y;
        if(x < 0)
            x = x + 1 ;
        if (y > 0)
            y = y- 1;
        x = abs(x) ;
        y = abs(y) ;
        t_max = x > y?x:y;
        if (max < t_max){
            *(a+t_max) = *(a+max) + 1;
            max = t_max;
        }
        else{
            (*(a+max)) ++ ; 
            if(max != t_max)
                (*(a+t_max))++ ;
        }
    }
    for(int i = 0 ; i < q ;i++){
        cin>>x;
        if(x>max)
        	x = max+1;
        cout<<4*x*x - a[x-1] <<endl;
    }
}
