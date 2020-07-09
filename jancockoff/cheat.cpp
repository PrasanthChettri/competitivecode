#include<bits/stdc++.h>
using namespace std;
int main(){
    int n_t ;
    cin>>n_t ;
    cin.clear();
    int ram , shyam ,end , counter;
    while(n_t--){
        counter= 1;
        cin>>ram>>shyam;
        if(ram == shyam) 
            cout<<-1;
        for(int  i = 2; i < max(ram , shyam) ; i++)
            if(ram%i == shyam%i)
                counter++;
        cout<<counter<<endl;
    }
}
