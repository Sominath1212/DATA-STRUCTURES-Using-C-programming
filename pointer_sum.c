/*thise program calculate total sum of array member using call by refrence*/
#include<stdio.h>
int main( ) {
    int a [ 10 ] , i , j;
    int* p;
    p = &a;
    printf( "Enter 10 elemenent for array=\n" );
    for ( i = 0; i <= 9; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    int sum = 0;
    j = 0;
    while ( j <= 9 )
    {
        sum = sum + ( *p );
        p++;
        j++;
    }
    printf( "total sum is :%d\n" , sum );

    return 0;
}