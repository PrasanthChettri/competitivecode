#include<iostream>
using namespace std ;
class q{
    public :
        int data ;
        q * next ;

}* head , * tail;
void push(int item){
    q * node = new q(); 
    node->data = item ;
    node->next = NULL ;
    if(head == tail){
        head->next = node ;
        tail->next = node ; 
    }
    else 
       tail->next = node ;
}
void pop(){
    return ;
}

int main(){
}
