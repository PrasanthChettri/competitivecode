#include<iostream>
using namespace std ;
class Node {
    public :
        int data ;
        Node * next ; 
}*node;
void push(int item){
    Node * new_n = new Node();
    new_n->data = item;
    new_n->next = node ;
    node = new_n ;
}
bool pop(){
    Node * temp = node ; 
    if(node){
        node = node->next ;
        delete temp ;
        return true ;
    }
    return false;
}
void see(){
    for(Node * i = node ; i ; i = i->next)
        std::cout<<i->data <<std::endl ;
};
int main(){
    node = NULL ;
    push(320);
    push(0);
    see();
    cout<<!node ;
}
