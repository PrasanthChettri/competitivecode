#include<iostream>
int convertFive(int n)
{
    int num = 0 ;
    while(n){
        std::cout<< num<<std::endl;
        num = num * 10 + (n%10)?n%10 : 5 ;
        n /= 10;
    }
    return num ;
}

int main(){
    std::cout<<convertFive(10);
}
