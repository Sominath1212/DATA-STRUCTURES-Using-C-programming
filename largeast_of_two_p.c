/*find largest number using call by refrence (using pointerr)*/
#include<stdio.h>
int main( ) {
    int a , b;
    int* p1 , * p2;
    p1 = &a;
    p2 = &b;
    printf( "Enter any two integers =\n" );
    scanf( "%d%d" , p1 , p2 );
    if ( ( *p1 ) > ( *p2 ) )
    {
        printf( "%d is largeast number\n" , *p1 );
    }
    else if ( ( *p2 ) > ( *p1 ) )
    {
        printf( "%d is largeast number\n" , *p2 );
    }
    else
    {
        printf( "%d and %d are equal numbers\n" , *p1 , *p2 );
    }


    return 0;
}