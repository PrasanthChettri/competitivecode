#include<stdio.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
int main(int argc, char *kwags[])
{
	long long int arr[10000000] ;
	register int n ; 
	register long long int  i ;
	long long int  b ;
    double a  = LLONG_MAX ;
    scanf("%d" ,   n) ;
	for(i = 0 ; i < n ; i++)
        scanf("%lli" , (arr+i)) ;
	for(i = 0 ; i < n ; i++){
        scanf("%lli" , &b) ;
        a = min(a , arr[i]/b);
    }
    printf("%lli" , a) ;
}
