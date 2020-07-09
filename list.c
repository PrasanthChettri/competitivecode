#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data ; 
    struct Node * link ; 
} node;
node * start , * last ;
void start_insert(){
    node * temp = (node * ) malloc(sizeof(node));
    printf("ENTER DATA " );
    scanf("%d" , &temp->data);
    if(start == NULL){
        temp->link = NULL ;
        start  = temp ; 
        last = temp; 
    }
    else{
        temp->link = start;
        start = temp ; 
    }
}
void end_insert(){
    node * temp = (node * ) malloc(sizeof(node)) ; 
    return ; 

}
int main(){
}
