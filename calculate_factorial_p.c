#include<stdio.h>
int main( ) {
    long n;
    long* p = &n;
    long f;
    long* p2 = &f;
    printf( "ente any number for find foctorial =\n" );
    scanf( "%d" , p );
    *p2 = 1;
    for ( long i = 1; i <= ( *p ); i++ )
    {
        long* p3 = &i;
        *p2 = ( *p2 ) * ( *p3 );

    }
    printf( "%ld is factorial of %ld" , ( *p2 ) , ( *p ) );

    return 0;
}