/*thise program print naturel number using call by refrence*/
#include<stdio.h>
int main( ) {
    int n;
    int* p = &n;
    printf( "enter any number=\n" );
    scanf( "%d" , p );
    for ( int i = 0; i <= ( *p ); i++ )
    {
        int* p2 = &i;
        printf( "%d\t" , *p2 );
    }

    return 0;
}