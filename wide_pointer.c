#include<stdio.h>
void* opration( int x )
{

    int n = 10;
    float b = 34.56;
    double k = 45.487358;
    char ch = 'A';

    if ( x == 1 )
    {
        return &n;
    }
    else if ( x == 2 )
    {
        return &b;
    }
    else if ( x == 3 )
    {
        return &k;
    }
    else if ( x == 4 )
    {
        return &ch;

    }





}
int main( ) {

    int* p;
    *p = ( int ) opration( 1 );
    printf( " rondum value is %d" , *p );
    return 0;
}