/*thise program calculate total area of circle and total cercomefurance of circle*/
#include<stdio.h>
int main( ) {
    float r;
    float* rp;
    rp = &r;
    printf( "enter redius of circle=\n " );
    scanf( "%f" , rp );
    float total_area;
    float* taP = &total_area;
    *taP = ( 22 / 7 ) * ( *rp ) * ( *rp );
    float CC;
    float* CCp = &CC;
    *CCp = 2 * ( 22 / 7 ) * ( *rp );
    printf( "total area of circle is %f\n" , *taP );
    printf( "total cercomefernce of circle is %f\n" , *CCp );

    return 0;
}