#include<stdio.h>
void foo(char * s , char target){
    char *pointer = s - 1 ;
    char * holder = s ;
    while(*++pointer)
        if(*pointer != target) *holder++ = *pointer ;
    *holder = * pointer ;
}
int main(){
    char s[100] ;
    int  n ; 
    scanf("%d" , &n) ;
    for(int i =0  ; i< n  ; i++)
        scanf("%d" , &s[i]) ;
    scanf("%d" , &n);
    foo(s , target);
    printf("%s" , s);
}
