#include<iostream>

using namespace std;
int main(){
	int r, q; 
	cin>>r>>q;
    int ** a = new int*[2];
    a[0] = new int[q];
    a[1] = new int[q];
	for(int i = 0 ; i < 2*r  ; i++){
        cin>>*(*(a+i/r)+ i%r);
	}
    for(int i = 0 ; i < q ; i++){
        int r , b  , counter = 0 ;
        cin>>r>>b;
        int m = *(*(a+r) + b);
        for(int i = 0 ; i <= b ; i++){
            if(*(*(a+r)+i) > m)
                counter ++ ;
        }
        cout<<counter <<endl; 
    }
}
